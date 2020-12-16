/********************************************************************************
** Form generated from reading UI file 'QGCHilXPlaneConfiguration.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCHILXPLANECONFIGURATION_H
#define UI_QGCHILXPLANECONFIGURATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCHilXPlaneConfiguration
{
public:
    QGridLayout *gridLayout;
    QPushButton *startButton;
    QLabel *hostLabel;
    QSpacerItem *verticalSpacer;
    QCheckBox *sensorHilCheckBox;
    QComboBox *hostComboBox;
    QCheckBox *useHilActuatorControlsCheckBox;

    void setupUi(QWidget *QGCHilXPlaneConfiguration)
    {
        if (QGCHilXPlaneConfiguration->objectName().isEmpty())
            QGCHilXPlaneConfiguration->setObjectName(QString::fromUtf8("QGCHilXPlaneConfiguration"));
        QGCHilXPlaneConfiguration->resize(269, 150);
        gridLayout = new QGridLayout(QGCHilXPlaneConfiguration);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        startButton = new QPushButton(QGCHilXPlaneConfiguration);
        startButton->setObjectName(QString::fromUtf8("startButton"));

        gridLayout->addWidget(startButton, 1, 1, 1, 2);

        hostLabel = new QLabel(QGCHilXPlaneConfiguration);
        hostLabel->setObjectName(QString::fromUtf8("hostLabel"));

        gridLayout->addWidget(hostLabel, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 0, 1, 3);

        sensorHilCheckBox = new QCheckBox(QGCHilXPlaneConfiguration);
        sensorHilCheckBox->setObjectName(QString::fromUtf8("sensorHilCheckBox"));

        gridLayout->addWidget(sensorHilCheckBox, 3, 0, 1, 3);

        hostComboBox = new QComboBox(QGCHilXPlaneConfiguration);
        hostComboBox->addItem(QString());
        hostComboBox->setObjectName(QString::fromUtf8("hostComboBox"));
        hostComboBox->setEditable(true);

        gridLayout->addWidget(hostComboBox, 0, 1, 1, 2);

        useHilActuatorControlsCheckBox = new QCheckBox(QGCHilXPlaneConfiguration);
        useHilActuatorControlsCheckBox->setObjectName(QString::fromUtf8("useHilActuatorControlsCheckBox"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(useHilActuatorControlsCheckBox->sizePolicy().hasHeightForWidth());
        useHilActuatorControlsCheckBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(useHilActuatorControlsCheckBox, 4, 0, 1, 3);

        gridLayout->setColumnStretch(0, 20);

        retranslateUi(QGCHilXPlaneConfiguration);

        QMetaObject::connectSlotsByName(QGCHilXPlaneConfiguration);
    } // setupUi

    void retranslateUi(QWidget *QGCHilXPlaneConfiguration)
    {
        QGCHilXPlaneConfiguration->setWindowTitle(QApplication::translate("QGCHilXPlaneConfiguration", "Form", nullptr));
        startButton->setText(QApplication::translate("QGCHilXPlaneConfiguration", "Start", nullptr));
        hostLabel->setText(QApplication::translate("QGCHilXPlaneConfiguration", "Host", nullptr));
        sensorHilCheckBox->setText(QApplication::translate("QGCHilXPlaneConfiguration", "Enable sensor level HIL", nullptr));
        hostComboBox->setItemText(0, QApplication::translate("QGCHilXPlaneConfiguration", "127.0.0.1:49000", nullptr));

        useHilActuatorControlsCheckBox->setText(QApplication::translate("QGCHilXPlaneConfiguration", "Use newer actuator format", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QGCHilXPlaneConfiguration: public Ui_QGCHilXPlaneConfiguration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCHILXPLANECONFIGURATION_H
