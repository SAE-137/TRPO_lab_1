#include "filewatch.h"

FileWatch::FileWatch(const QString path)
{

    fsWatcher = new QFileSystemWatcher(this);

    fsWatcher->addPath("C:\\Users\\admin\\Desktop\\Algorithms\\TRPO_lab_1\\folder for tracking changings");

    connect(fsWatcher, SIGNAL(fileChanged(path)), this, SLOT(changed(path)));




}


FileWatch::~FileWatch()
{

}

void FileWatch::addPath(const QString &path)
{

}

void FileWatch::fileChanged(const QString &path)
{

}
