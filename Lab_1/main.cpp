#include <QApplication>
#include "filewatch.h"
#include "notificationwidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    NotificationWidget notification;
    FileWatch watcher(&notification);

    watcher.addPath("C:\\Users\\admin\\Desktop\\Algorithms\\TRPO_lab_1\\folder for tracking changings\\test_1.txt");

    QObject::connect(&watcher, &FileWatch::fileChangedSignal, [&](const QString &path) {

        notification.showNotification("Файл изменён:\n" + path);
    });

    return a.exec();
}
