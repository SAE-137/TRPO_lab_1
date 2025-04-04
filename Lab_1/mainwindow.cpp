#include <QStandardItemModel>
#include <QDesktopServices>
#include <QMessageBox>
#include <QFile>
#include <QFileInfo>
#include <QMimeData>

#include "filemanager.h"
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "qevent.h"
#include "qurl.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);




    ui->listView->setModel(&m_model);
    ui->listView->setDragEnabled(true);
    ui->listView->setAcceptDrops(true);
    ui->listView->setDropIndicatorShown(true);
    ui->listView->viewport()->installEventFilter(this);
    ui->listView->setContextMenuPolicy(Qt::CustomContextMenu);


    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::addFileFromLineEdit);
    connect(ui->listView, &QListView::doubleClicked, this, &MainWindow::openSelectedFile);
    connect(ui->listView, &QListView::customContextMenuRequested,
            this, &MainWindow::showContextMenu);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addFileFromLineEdit()
{
    const QString filePath = ui->lineEdit->text().trimmed();

    if (filePath.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Введите путь к файлу!");
        return;
    }

    if (fileAlreadyExists(filePath)) {
        QMessageBox::information(this, "Инфо", "Этот файл уже добавлен!");
        return;
    }
    //manager.addFile(filePath);


    ui->plainTextEdit->insertPlainText("???");
    addFileToModel(filePath);
}

void MainWindow::openSelectedFile(const QModelIndex &index)
{
    const QString filePath = index.data().toString();
    if (!QDesktopServices::openUrl(QUrl::fromLocalFile(filePath))) {
        QMessageBox::warning(this, "Ошибка", "Не удалось открыть файл!");
    }
}

bool MainWindow::eventFilter(QObject *watched, QEvent *event)
{
    if (watched == ui->listView->viewport() && event->type() == QEvent::Drop) {
        QDropEvent *dropEvent = static_cast<QDropEvent*>(event);
        const QMimeData *mimeData = dropEvent->mimeData();

        if (mimeData->hasUrls()) {
            for (const QUrl &url : mimeData->urls()) {
                QString filePath = url.toLocalFile();
                QFileInfo fileInfo(filePath);

                if (fileInfo.isFile() && !fileAlreadyExists(filePath)) {
                    addFileToModel(filePath);
                }
            }
            dropEvent->acceptProposedAction();
            return true;
        }
    }
    return QMainWindow::eventFilter(watched, event);
}

void MainWindow::showContextMenu(const QPoint &pos)
{
    QMenu contextMenu(tr("Контекстное меню"), this);

    QAction *removeAction = contextMenu.addAction("Удалить");
    QAction *selectedAction = contextMenu.exec(ui->listView->mapToGlobal(pos));

    if (selectedAction == removeAction) {
        removeSelectedFile();
    }
}


bool MainWindow::fileAlreadyExists(const QString &filePath) const
{
    return !m_model.findItems(filePath).isEmpty();
}

void MainWindow::addFileToModel(const QString &filePath)
{
    QStandardItem *item = new QStandardItem(filePath);


    m_model.appendRow(item);
}

void MainWindow::removeSelectedFile()
{
    QModelIndexList selected = ui->listView->selectionModel()->selectedIndexes();
    foreach (const QModelIndex &index, selected) {
        m_model.removeRow(index.row());
    }
}
