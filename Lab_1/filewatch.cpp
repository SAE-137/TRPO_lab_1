#include "filewatch.h"
#include <QDebug>
#include <QFileInfo>


FileWatch::FileWatch(NotificationWidget *notifier, QObject *parent)
    : QObject(parent), m_fsWatcher(new QFileSystemWatcher(this)), m_notifier(notifier)
{
    connect(m_fsWatcher, &QFileSystemWatcher::fileChanged, this, &FileWatch::onFileChanged);
}

void FileWatch::addPath(const QString &path)
{
    QFileInfo fileInfo(path);

    if (fileInfo.exists() && fileInfo.isFile() && !m_fsWatcher->files().contains(path)) {
        m_fsWatcher->addPath(path);
        qDebug() << "Started watching:" << path;
    } else {
        qDebug() << "File does not exist or is already being watched:" << path;
    }
}

void FileWatch::onFileChanged(const QString &path)
{
    qDebug() << "File changed:" << path;
    if (m_notifier) {
        m_notifier->showNotification("Файл изменён:\n" + path);
    }
    emit fileChangedSignal(path);
}
