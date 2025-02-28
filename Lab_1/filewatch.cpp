#include "filewatch.h"
#include <QDebug>


FileWatch::FileWatch(const QString &path, QObject *parent)
    : QObject(parent), m_fsWatcher(new QFileSystemWatcher(this))
{

    m_fsWatcher->addPath(path);


    connect(m_fsWatcher, &QFileSystemWatcher::fileChanged, this, &FileWatch::onFileChanged);
}


FileWatch::~FileWatch()
{
    delete m_fsWatcher;
}


void FileWatch::addPath(const QString &path)
{
    if (!m_fsWatcher->files().contains(path)) {
        m_fsWatcher->addPath(path);
    }
}


void FileWatch::onFileChanged(const QString &path)
{
    qDebug() << "File changed:" << path;


    emit fileChangedSignal(path);
}
