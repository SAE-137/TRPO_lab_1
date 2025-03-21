#include<QDebug>
#include "filemanager.h"

void fileManager::addFile(const QString& filePath) {
    observer.addFile(filePath);
}
