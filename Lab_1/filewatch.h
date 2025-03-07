#ifndef FILEWATCH_H
#define FILEWATCH_H

#include <QFileSystemWatcher>
#include <QObject>
#include <QString>
#include "notificationwidget.h"

class FileWatch : public QObject
{
    Q_OBJECT

public:
    FileWatch(NotificationWidget *notifier, QObject *parent = nullptr);  // Добавили notifier
    void addPath(const QString &path);

signals:
    void fileChangedSignal(const QString &path);

private slots:
    void onFileChanged(const QString &path);

private:
    QFileSystemWatcher *m_fsWatcher;
    NotificationWidget *m_notifier;
};

#endif // FILEWATCH_H
