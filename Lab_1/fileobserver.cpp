#include <QDebug>
#include <QFileInfo>
#include "fileobserver.h"
#include "fileinformation.h"

fileObserver::fileObserver(informationSender* senderPtr, QObject *parent)
    : QObject(parent), sender(senderPtr) {
    if (!sender) {
        qDebug() << "ERROR: sender = nullptr!";
    }
    connect(&watcher, &QFileSystemWatcher::fileChanged, this, &fileObserver::onFileChanged);
}

void fileObserver::addFile(const QString& filePath) {

    QFileInfo fileInfo(filePath);

    if (!fileInfo.exists()) {

        files.insert(filePath, FileInformation(filePath));
        watcher.addPath(filePath);
        qDebug() << filePath << "does not exist";
        return;
    }


    FileInformation fileData(filePath);
    fileData.setExist(true);
    fileData.setSize(fileInfo.size());

    files.insert(filePath, fileData);
    watcher.addPath(filePath);
}

void fileObserver::onFileChanged(const QString& filePath) {
    if (!files.contains(filePath)) return;

    QFileInfo fileInfo(filePath);


    if (!fileInfo.exists()) {
        if (files[filePath].isExist()) {

                files[filePath].setExist(false);
            if (sender) sender->existChanged(filePath, false);
        }
        return;
    }


    size_t newSize = fileInfo.size();
    if (files[filePath].getSize() != newSize) {
        files[filePath].setSize(newSize);

        if (sender) sender->sizeChanged(filePath, newSize);
    }
}
