#ifndef NOTIFICATIONWIDGET_H
#define NOTIFICATIONWIDGET_H

#include <QWidget>
#include <QTimer>
#include <QLabel>
#include <QString>

class NotificationWidget : public QWidget
{
    Q_OBJECT

public:
    explicit NotificationWidget(QWidget* parent = nullptr);
    void showNotification(const QString &message);

private:
    QTimer* m_timer;
    QLabel* m_message;
};

#endif // NOTIFICATIONWIDGET_H
