#include <QApplication>
#include<QDebug>
#include "filemanager.h"
#include "mainwindow.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);


    informationSender sender;
    fileManager manager(&sender);

    manager.addFile("C:\\Users\\admin\\Desktop\\Algorithms\\TRPO_lab_1\\folder for tracking changings\\1.txt");
    manager.addFile("C:\\Users\\admin\\Desktop\\Algorithms\\TRPO_lab_1\\folder for tracking changings\\5.txt");



    //MainWindow a;
    //a.show();
    return app.exec();
}
