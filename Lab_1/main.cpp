#include <QCoreApplication>
#include "filewatch.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    FileWatch watcher("C:\\Users\\admin\\Desktop\\Algorithms\\TRPO_lab_1\\folder for tracking changings\\test_1.txt");


    QObject::connect(&watcher, &FileWatch::fileChangedSignal, [](const QString &path) {
        qDebug() << "File changed (from signal):" << path;
    });

    return a.exec();
}
