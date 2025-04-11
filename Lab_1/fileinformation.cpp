#include<QFileInfo>
#include<QElapsedTimer>
#include "fileinformation.h"



FileInformation::FileInformation(const QString& name)
{

    m_fileInfo.setFile(name);

}

size_t FileInformation::getSize() const {
    return m_fileInfo.size();
}

QString FileInformation::getName() const {
    return m_fileInfo.fileName();
}

bool FileInformation::isExist() const {
    return m_fileInfo.exists();
}

bool FileInformation::isEmpty() const
{
    if(m_fileInfo.size() == 0)
        return true;

    return false;
}

void FileInformation::refresh() {

        m_fileInfo.refresh();
}
