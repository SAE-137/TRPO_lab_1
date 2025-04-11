#ifndef FILEINFORMATION_H
#define FILEINFORMATION_H

#include <QString>
#include <QFileInfo>

class FileInformation
{
public:
    explicit FileInformation(const QString& name);

    size_t getSize() const;

    QString getName() const;

    bool isExist() const;
    bool isEmpty() const;

    void refresh();

private:
    QFileInfo m_fileInfo;
};

#endif // FILEINFORMATION_H
