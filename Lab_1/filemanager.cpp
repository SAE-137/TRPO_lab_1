#include<QDebug>
#include "filemanager.h"

fileManager::fileManager(QObject* parent)
{
    connect(&observer, &fileObserver::fileAppeared, &console, &consoleInteraction::fileIsExistAndNotEmpty);
    connect(&observer, &fileObserver::fileDisappeared, &console, &consoleInteraction::fileIsNotExist);
    connect(&observer, &fileObserver::fileSizeChanged, &console, &consoleInteraction::fileChanged);

}

void fileManager::addFile(const QString& filePath) {
    observer.addFile(filePath);
}
