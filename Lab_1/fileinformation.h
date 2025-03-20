#ifndef FILEINFORMATION_H
#define FILEINFORMATION_H

#include<qstring.h>

class FileInformation
{
public:
    FileInformation();//
    FileInformation(const QString name);//
    ~FileInformation() = default;//

    void setSize(size_t size);//
    void includeName(const QString name);//
    void setExsist(bool exist);//

    size_t getSize() const;//
    QString getName() const;//

    bool isExist() const; //

private:
    size_t m_size = 0;
    QString m_name = nullptr;
    bool m_exist = false;
};

#endif // FILEINFORMATION_H
