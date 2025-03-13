#ifndef FILEINFORMATION_H
#define FILEINFORMATION_H

#include<qstring.h>

class FileInformation
{
public:
    FileInformation();
    FileInformation(const QString name);
    ~FileInformation() = default;

    int getSize() const;

    void includeName(const QString name);

    QString getName() const;

    bool isExist() const; //??????
    bool isChanged() const; //??????

private:
    int m_size = 0;
    QString m_name = nullptr;
};

#endif // FILEINFORMATION_H
