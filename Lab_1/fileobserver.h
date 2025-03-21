#ifndef FILEOBSERVER_H
#define FILEOBSERVER_H

#include <QObject>
#include <QFileSystemWatcher>
#include <QMap>
#include <QFileInfo>
#include "fileinformation.h"
#include "informationsender.h"

class fileObserver : public QObject {
    Q_OBJECT

    QFileSystemWatcher watcher;
    QMap<QString, FileInformation> files;
    informationSender* sender;

public:
    explicit fileObserver(informationSender* sender, QObject *parent = nullptr);

    void addFile(const QString& filePath);

private slots:
    void onFileChanged(const QString& filePath);

};

#endif // FILEOBSERVER_H
