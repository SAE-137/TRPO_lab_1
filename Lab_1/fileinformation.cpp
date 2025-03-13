#include "fileinformation.h"

FileInformation::FileInformation()
{
    m_size = 0;
    m_name = nullptr;
}

FileInformation::FileInformation(const QString name)
{
    m_size = 0; //???????
    m_name = name;
}

int FileInformation::getSize() const
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















