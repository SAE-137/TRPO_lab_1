#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "filemanager.h"
#include "informationsender.h"
#include <QStandardItemModel>
#include <QMainWindow>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void changed(const QString &flName);
    void insert();



private slots:
    void addFileFromLineEdit();
    void openSelectedFile(const QModelIndex &index);
    void showContextMenu(const QPoint &pos);

private:
    bool fileAlreadyExists(const QString &filePath) const;
    void addFileToModel(const QString &filePath);
    void removeSelectedFile();

    bool eventFilter(QObject *watched, QEvent *event) override;

    //informationSender sender;
    //fileManager manager;

    Ui::MainWindow *ui;
    QStandardItemModel m_model;
};
#endif // MAINWINDOW_H
