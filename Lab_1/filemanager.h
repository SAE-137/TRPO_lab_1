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


    explicit fileManager(informationSender* sender, QObject *parent = nullptr)
        : QObject(parent), observer(sender), console(sender) {}

    void addFile(const QString& filePath);
};

#endif // FILEMANAGER_H
