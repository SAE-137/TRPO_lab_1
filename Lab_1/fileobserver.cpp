
#include <QTimer>
#include <QDebug>
#include<QTimer>

#include "fileobserver.h"

fileObserver::fileObserver(QObject *parent)
    : QObject(parent)
{
    m_checkTimer.setInterval(1000);
    connect(&m_checkTimer, &QTimer::timeout, this, &fileObserver::checkFiles);
    m_checkTimer.start();
}

void fileObserver::addFile(const QString& filePath)
{
    if (!m_trackedFiles.contains(filePath)) {
        FileInformation fileInfo(filePath);
        fileInfo.refresh();

        m_trackedFiles.insert(filePath, fileInfo);
        m_lastKnownSizes[filePath] = fileInfo.getSize();

        if (fileInfo.isExist() && !fileInfo.isEmpty()) {
            emit fileAppeared(filePath);
        }
    }
}

void fileObserver::checkFiles()
{
    for (auto it = m_trackedFiles.begin(); it != m_trackedFiles.end(); ++it) {
        const QString& filePath = it.key();
        FileInformation& fileInfo = it.value();


        bool existedBefore = fileInfo.isExist();
        qint64 prevSize = m_lastKnownSizes[filePath];


        fileInfo.refresh();

        bool existsNow = fileInfo.isExist();
        qint64 currentSize = fileInfo.getSize();


        if (!existedBefore && existsNow) {
            emit fileAppeared(filePath);
            m_lastKnownSizes[filePath] = currentSize;
        }
        else if (existedBefore && !existsNow) {
            emit fileDisappeared(filePath);
            m_lastKnownSizes[filePath] = -1;
        }
        else if (existsNow && (prevSize != currentSize)) {
            emit fileSizeChanged(filePath);
            m_lastKnownSizes[filePath] = currentSize;
        }
    }
}




