#ifndef CONSOLEINTERACTION_H
#define CONSOLEINTERACTION_H

#include <QObject>

class consoleInteraction
{
public:
    consoleInteraction();

    void sizeChange(const QString, size_t size) const;
    void existChange(const QString name, bool exist) const;
};

#endif // CONSOLEINTERACTION_H
