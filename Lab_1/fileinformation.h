#ifndef FILEINFORMATION_H
#define FILEINFORMATION_H

#include <QString>

class FileInformation {
public:
    FileInformation();
    explicit FileInformation(const QString& name);

    size_t getSize() const;
    void setSize(size_t size);

    QString getName() const;
    void setName(const QString& name);

    bool isExist() const;
    void setExist(bool exist);

private:
    size_t m_size;
    QString m_name;
    bool m_exist;
};

#endif // FILEINFORMATION_H
