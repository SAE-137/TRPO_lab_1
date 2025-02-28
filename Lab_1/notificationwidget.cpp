#include "notificationwidget.h"



NotificationWidget::NotificationWidget(QWidget* parent)
    :QWidget(parent)
{

    setWindowTitle("Notification");
    setFixedSize(300, 100);

    m_message = new QLabel(this);
    m_message->setAlignment(Qt::AlignCenter);

    m_timer = new QTimer(this);
    m_timer->setInterval(3000);



}
