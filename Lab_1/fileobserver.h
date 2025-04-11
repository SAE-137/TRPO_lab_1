#ifndef FILEOBSERVER_H
#define FILEOBSERVER_H
#include<QTimer>
#include <QObject>
#include <QFileSystemWatcher>
#include <QMap>
#include <QFileInfo>
#include "fileinformation.h"


class fileObserver : public QObject {
    Q_OBJECT

public:
    explicit fileObserver(QObject *parent = nullptr);

    void addFile(const QString& filePath);
    void checkFiles();

private:
    QTimer m_checkTimer;
    QHash<QString, FileInformation> m_trackedFiles;
    QHash<QString, qint64> m_lastKnownSizes;

signals:
    void fileAppeared(const QString& filePath);
    void fileDisappeared(const QString& filePath);
    void fileSizeChanged(const QString& filePath);

};

#endif // FILEOBSERVER_H
