#ifndef FILEWATCH_H
#define FILEWATCH_H

#include<QFileSystemWatcher>
#include <QObject>
#include <QString>


class FileWatch : public QObject
{
    Q_OBJECT
public:


    FileWatch(const QString path);
    ~FileWatch();

    void addPath(const QString &path);



private slots:

    void fileChanged(const QString &path);


private:
    QFileSystemWatcher *fsWatcher;

};

#endif // FILEWATCH_H
