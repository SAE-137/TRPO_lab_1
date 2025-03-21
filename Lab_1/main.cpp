#include <QCoreApplication>
#include<QDebug>
#include "filemanager.h"

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);


    informationSender sender;
    fileManager manager(&sender);

    manager.addFile("C:\\Users\\admin\\Desktop\\Algorithms\\TRPO_lab_1\\folder for tracking changings\\1.txt");
    manager.addFile("C:\\Users\\admin\\Desktop\\Algorithms\\TRPO_lab_1\\folder for tracking changings\\2.txt");

    return a.exec();
}
