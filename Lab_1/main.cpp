#include <QApplication>
#include<QDebug>
#include "filemanager.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);


    fileManager manager;

    manager.addFile("C:\\Users\\admin\\Desktop\\Algorithms\\TRPO_lab_1\\folder for tracking changings\\1.txt");
    manager.addFile("C:\\Users\\admin\\Desktop\\Algorithms\\TRPO_lab_1\\folder for tracking changings\\5.txt");

    return app.exec();
}
