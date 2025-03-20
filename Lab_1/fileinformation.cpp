#include "fileinformation.h"

FileInformation::FileInformation()
{
    m_size = 0;
    m_name = nullptr;
}

FileInformation::FileInformation(const QString name)
{
    m_name = name;
}

size_t FileInformation::getSize() const
{
    return m_size;
}

void FileInformation::includeName(const QString name)
{
    m_name = name;
}


QString FileInformation::getName() const
{
    return m_name;
}

void FileInformation::setSize(size_t size)
{
    m_size = size;
}

void FileInformation::setExsist(bool exist)
{
    m_exist = exist;
}

bool FileInformation::isExist() const
{
    return m_exist;
}




































































