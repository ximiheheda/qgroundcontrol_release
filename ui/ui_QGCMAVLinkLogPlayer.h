/********************************************************************************
** Form generated from reading UI file 'QGCMAVLinkLogPlayer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMAVLINKLOGPLAYER_H
#define UI_QGCMAVLINKLOGPLAYER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCMAVLinkLogPlayer
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *logCurrentTime;
    QToolButton *playButton;
    QLabel *timeLabel;
    QSlider *positionSlider;
    QLabel *logFileNameLabel;
    QLabel *logLengthTime;
    QPushButton *selectFileButton;

    void setupUi(QWidget *QGCMAVLinkLogPlayer)
    {
        if (QGCMAVLinkLogPlayer->objectName().isEmpty())
            QGCMAVLinkLogPlayer->setObjectName(QString::fromUtf8("QGCMAVLinkLogPlayer"));
        QGCMAVLinkLogPlayer->resize(948, 38);
        horizontalLayout = new QHBoxLayout(QGCMAVLinkLogPlayer);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(12, 0, 4, 0);
        logCurrentTime = new QLabel(QGCMAVLinkLogPlayer);
        logCurrentTime->setObjectName(QString::fromUtf8("logCurrentTime"));

        horizontalLayout->addWidget(logCurrentTime);

        playButton = new QToolButton(QGCMAVLinkLogPlayer);
        playButton->setObjectName(QString::fromUtf8("playButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/Play"), QSize(), QIcon::Normal, QIcon::Off);
        playButton->setIcon(icon);
        playButton->setCheckable(true);
        playButton->setChecked(false);

        horizontalLayout->addWidget(playButton);

        timeLabel = new QLabel(QGCMAVLinkLogPlayer);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));

        horizontalLayout->addWidget(timeLabel);

        positionSlider = new QSlider(QGCMAVLinkLogPlayer);
        positionSlider->setObjectName(QString::fromUtf8("positionSlider"));
        positionSlider->setMaximum(10000);
        positionSlider->setPageStep(100);
        positionSlider->setTracking(false);
        positionSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(positionSlider);

        logFileNameLabel = new QLabel(QGCMAVLinkLogPlayer);
        logFileNameLabel->setObjectName(QString::fromUtf8("logFileNameLabel"));

        horizontalLayout->addWidget(logFileNameLabel);

        logLengthTime = new QLabel(QGCMAVLinkLogPlayer);
        logLengthTime->setObjectName(QString::fromUtf8("logLengthTime"));

        horizontalLayout->addWidget(logLengthTime);

        selectFileButton = new QPushButton(QGCMAVLinkLogPlayer);
        selectFileButton->setObjectName(QString::fromUtf8("selectFileButton"));

        horizontalLayout->addWidget(selectFileButton);


        retranslateUi(QGCMAVLinkLogPlayer);

        QMetaObject::connectSlotsByName(QGCMAVLinkLogPlayer);
    } // setupUi

    void retranslateUi(QWidget *QGCMAVLinkLogPlayer)
    {
        QGCMAVLinkLogPlayer->setWindowTitle(QApplication::translate("QGCMAVLinkLogPlayer", "Form", nullptr));
        logCurrentTime->setText(QString());
#ifndef QT_NO_TOOLTIP
        playButton->setToolTip(QApplication::translate("QGCMAVLinkLogPlayer", "Start to replay Flight Data", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        playButton->setStatusTip(QApplication::translate("QGCMAVLinkLogPlayer", "Start to replay Flight Data", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        playButton->setWhatsThis(QApplication::translate("QGCMAVLinkLogPlayer", "Start to replay Flight Data", nullptr));
#endif // QT_NO_WHATSTHIS
        playButton->setText(QApplication::translate("QGCMAVLinkLogPlayer", "...", nullptr));
        timeLabel->setText(QApplication::translate("QGCMAVLinkLogPlayer", "Time", nullptr));
        logFileNameLabel->setText(QApplication::translate("QGCMAVLinkLogPlayer", "No Flight Data selected..", nullptr));
        logLengthTime->setText(QString());
#ifndef QT_NO_TOOLTIP
        selectFileButton->setToolTip(QApplication::translate("QGCMAVLinkLogPlayer", "Select the Flight Data to replay", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        selectFileButton->setStatusTip(QApplication::translate("QGCMAVLinkLogPlayer", "Select the Flight Data to replay", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        selectFileButton->setWhatsThis(QApplication::translate("QGCMAVLinkLogPlayer", "Select the Flight Data to replay", nullptr));
#endif // QT_NO_WHATSTHIS
        selectFileButton->setText(QApplication::translate("QGCMAVLinkLogPlayer", "Replay Flight Data", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QGCMAVLinkLogPlayer: public Ui_QGCMAVLinkLogPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMAVLINKLOGPLAYER_H
