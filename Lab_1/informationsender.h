#ifndef INFORMATIONSENDER_H
#define INFORMATIONSENDER_H


#include "qobject.h"
#include "qobjectdefs.h"
class informationSender : public QObject
{
    Q_OBJECT;
public:
    informationSender(QObject* parent = nullptr);


public slots:
    void sizeChanged(const QString name, size_t size);
    void existChanged(const QString name, bool exist);

signals:
    void sizeChangedSignal(const QString name, size_t size);
    void existChangedSignal(const QString name, bool exist);

private:

};

#endif // INFORMATIONSENDER_H
