#ifndef CONSOLEINTERACTION_H
#define CONSOLEINTERACTION_H

#include "informationsender.h"
#include <QObject>
#include <QString>



class consoleInteraction : public QObject {
    Q_OBJECT
public:
    explicit consoleInteraction(informationSender *sender, QObject* parent = nullptr);

public slots:
    void sizeChange(const QString& name, size_t size) const;
    void existChange(const QString& name, bool exist) const;
};

#endif // CONSOLEINTERACTION_H
