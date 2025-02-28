#ifndef FILEWATCH_H
#define FILEWATCH_H

#include <QFileSystemWatcher>
#include <QObject>
#include <QString>

class FileWatch : public QObject
{
    Q_OBJECT

public:
    explicit FileWatch(const QString &path, QObject *parent = nullptr);
    ~FileWatch();

    void addPath(const QString &path);

signals:
    void fileChangedSignal(const QString &path);

private slots:
    void onFileChanged(const QString &path);

private:
    QFileSystemWatcher *m_fsWatcher;
};

#endif // FILEWATCH_H
