#ifndef INFORMATIONSENDER_H
#define INFORMATIONSENDER_H


#include <QObject>
#include <QString>
class informationSender : public QObject
{
    Q_OBJECT;
public:
    informationSender(QObject* parent = nullptr) : QObject(parent) {}


public slots:
    void sizeChanged(const QString& name, size_t size);
    void existChanged(const QString& name, bool exist);

signals:
    void sizeChangedSignal(const QString& name, size_t size);
    void existChangedSignal(const QString& name, bool exist);

private:

};

#endif // INFORMATIONSENDER_H
