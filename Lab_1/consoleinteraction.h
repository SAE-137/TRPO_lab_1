#ifndef CONSOLEINTERACTION_H
#define CONSOLEINTERACTION_H


#include <QObject>
#include <QString>



class consoleInteraction : public QObject
{
    Q_OBJECT

public:
    explicit consoleInteraction(QObject* parent = nullptr) {}

public slots:
    void fileChanged(const QString& name) const;
    void fileIsExistAndNotEmpty(const QString& name) const;
    void fileIsNotExist(const QString& name) const;

};

#endif // CONSOLEINTERACTION_H
