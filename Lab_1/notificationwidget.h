#ifndef NOTIFICATIONWIDGET_H
#define NOTIFICATIONWIDGET_H

#include<QObject>
#include<QTimer>
#include<QLabel>
#include<QString>

class NotificationWidget : public QWidget
{

    Q_OBJECT;

public:


    explicit NotificationWidget(QWidget* parrent = nullptr);
    void showNotification(const QString &message);


signals:


private:
    QTimer* m_timer;
    QLabel* m_message;
};

#endif // NOTIFICATIONWIDGET_H
