#include "consoleinteraction.h"
#include "informationsender.h"
#include "qdebug.h"

consoleInteraction::consoleInteraction()
{
    informationSender* sender = new informationSender;

    informationSender::connect(sender, &informationSender::existChangedSignal, this, &consoleInteraction::sizeChange);
    informationSender::connect(sender, &informationSender::sizeChangedSignal, this, &consoleInteraction::existChange);
}

void consoleInteraction::sizeChange(const QString name, size_t size) const
{
    qDebug() << "File : " << name << " has been changed size to " << size;
}

void consoleInteraction::existChange(const QString name, bool exist) const
{
    qDebug() << "File : " << name << " does not exist";
}
