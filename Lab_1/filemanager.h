#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <QObject>
#include "fileobserver.h"
#include "consoleinteraction.h"

class fileManager : public QObject {
    Q_OBJECT

    fileObserver observer;
    consoleInteraction console;

public:

    explicit fileManager(QObject *parent = nullptr);

    void addFile(const QString& filePath);
};

#endif // FILEMANAGER_H
