

#include <QDebug>
#include <iostream>
#include "consoleinteraction.h"


void consoleInteraction::fileChanged(const QString& name) const
{
    qDebug() << "File : " << name << " has been changed size to ";

}

void consoleInteraction::fileIsExistAndNotEmpty(const QString& name) const
{
         qDebug() << "File : " << name << " does exist and not empty";

}

void consoleInteraction::fileIsNotExist(const QString& name) const
{

         qDebug() << "File : " << name << " does not exist";

}
