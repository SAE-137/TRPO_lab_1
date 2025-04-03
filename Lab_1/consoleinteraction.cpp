#include "consoleinteraction.h"
#include "informationsender.h"
#include <QDebug>

consoleInteraction::consoleInteraction(informationSender* sender, QObject* parent) : QObject(parent) {



    connect(sender, &informationSender::sizeChangedSignal, this, &consoleInteraction::sizeChange);
    connect(sender, &informationSender::existChangedSignal, this, &consoleInteraction::existChange);
}

void consoleInteraction::sizeChange(const QString& name, size_t size) const {
    qDebug() << "File : " << name << " has been changed size to " << size;
}

void consoleInteraction::existChange(const QString& name, bool exist) const {
    if (!exist)
    {
         qDebug() << "File : " << name << " does not exist";
    }
    else{
         qDebug() << "File : " << name << " does exist";
    }


}
