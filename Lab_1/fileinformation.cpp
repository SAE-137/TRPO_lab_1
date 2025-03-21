#include "fileinformation.h"

FileInformation::FileInformation()
{
    m_size = 0;
    m_exist = false;

}

FileInformation::FileInformation(const QString& name)
{
    m_name = name;
    m_size = 0;
    m_exist = false;
}

size_t FileInformation::getSize() const {
    return m_size;
}

void FileInformation::setSize(size_t size) {
    m_size = size;
}

QString FileInformation::getName() const {
    return m_name;
}

void FileInformation::setName(const QString& name) {
    m_name = name;
}

bool FileInformation::isExist() const {
    return m_exist;
}

void FileInformation::setExist(bool exist) {
    m_exist = exist;
}
