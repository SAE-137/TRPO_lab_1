#include "fileobserver.h"
#include <QTimer>
#include <QDebug>
#include<QTimer>

fileObserver::fileObserver(informationSender* senderPtr, QObject *parent)
    : QObject(parent), sender(senderPtr), checkTimer(new QTimer(this))
{
    if (!sender) {
        qDebug() << "ERROR: sender = nullptr!";
    }

    connect(&watcher, &QFileSystemWatcher::fileChanged, this, &fileObserver::onFileChanged);
    connect(checkTimer, &QTimer::timeout, this, &fileObserver::checkMissingFiles);
    checkTimer->start(1000);
}

void fileObserver::addFile(const QString& filePath)
{
    QFileInfo fileInfo(filePath);
    FileInformation fileData(filePath);

    if (fileInfo.exists()) {
        fileData.setExist(true);
        fileData.setSize(fileInfo.size());
        watcher.addPath(filePath);
        if (sender) sender->existChanged(filePath, true);
    } else {
        fileData.setExist(false);
        if (sender) sender->existChanged(filePath, false);
    }

    files.insert(filePath, fileData);
}

void fileObserver::onFileChanged(const QString& filePath)
{
    if (!files.contains(filePath)) return;

    QFileInfo fileInfo(filePath);
    bool currentlyExists = fileInfo.exists();


    if (files[filePath].isExist() != currentlyExists) {
        files[filePath].setExist(currentlyExists);

        if (currentlyExists) {
            watcher.addPath(filePath);
            files[filePath].setSize(fileInfo.size());
            if (sender) {
                sender->existChanged(filePath, true);
                sender->sizeChanged(filePath, fileInfo.size());
            }
        } else {
            watcher.removePath(filePath);
            if (sender) sender->existChanged(filePath, false);
        }
    }

    else if (currentlyExists && files[filePath].getSize() != fileInfo.size()) {
        files[filePath].setSize(fileInfo.size());
        if (sender) sender->sizeChanged(filePath, fileInfo.size());
    }
}

void fileObserver::checkMissingFiles()
{
    for (auto it = files.begin(); it != files.end(); ++it) {
        const QString& path = it.key();
        if (!it.value().isExist()) {
            QFileInfo fileInfo(path);
            if (fileInfo.exists()) {

                watcher.addPath(path);
                it.value().setExist(true);
                it.value().setSize(fileInfo.size());
                if (sender) {
                    sender->existChanged(path, true);
                    sender->sizeChanged(path, fileInfo.size());
                }
            }
        }
    }
}
