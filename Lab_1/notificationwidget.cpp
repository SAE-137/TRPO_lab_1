#include "notificationwidget.h"

NotificationWidget::NotificationWidget(QWidget* parent)
    : QWidget(parent)
{
    setWindowTitle("Notification");
    setFixedSize(300, 100);

    m_message = new QLabel(this);
    m_message->setAlignment(Qt::AlignCenter);
    m_message->setGeometry(10, 10, 280, 80);

    m_timer = new QTimer(this);
    m_timer->setInterval(9000);


    connect(m_timer, &QTimer::timeout, this, &QWidget::close);
}

void NotificationWidget::showNotification(const QString &message)
{
    m_message->setText(message);
    show();
    m_timer->start();
}
