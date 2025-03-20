#include "informationsender.h"




void informationSender::sizeChanged(const QString name, size_t size)
{
    emit sizeChangedSignal(name, size);
}

void informationSender::existChanged(const QString name, bool exist)
{
    emit existChangedSignal(name, exist);
}
