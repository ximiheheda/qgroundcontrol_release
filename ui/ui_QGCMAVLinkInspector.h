/********************************************************************************
** Form generated from reading UI file 'QGCMAVLinkInspector.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMAVLINKINSPECTOR_H
#define UI_QGCMAVLINKINSPECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCMAVLinkInspector
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *systemComboBox;
    QComboBox *componentComboBox;
    QLabel *label_2;
    QPushButton *clearButton;
    QTreeWidget *treeWidget;

    void setupUi(QWidget *QGCMAVLinkInspector)
    {
        if (QGCMAVLinkInspector->objectName().isEmpty())
            QGCMAVLinkInspector->setObjectName(QString::fromUtf8("QGCMAVLinkInspector"));
        QGCMAVLinkInspector->resize(658, 300);
        gridLayout = new QGridLayout(QGCMAVLinkInspector);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(6, 6, 6, 6);
        label = new QLabel(QGCMAVLinkInspector);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        systemComboBox = new QComboBox(QGCMAVLinkInspector);
        systemComboBox->setObjectName(QString::fromUtf8("systemComboBox"));

        gridLayout->addWidget(systemComboBox, 0, 1, 1, 1);

        componentComboBox = new QComboBox(QGCMAVLinkInspector);
        componentComboBox->setObjectName(QString::fromUtf8("componentComboBox"));

        gridLayout->addWidget(componentComboBox, 0, 3, 1, 1);

        label_2 = new QLabel(QGCMAVLinkInspector);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        clearButton = new QPushButton(QGCMAVLinkInspector);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        gridLayout->addWidget(clearButton, 0, 4, 1, 1);

        treeWidget = new QTreeWidget(QGCMAVLinkInspector);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        gridLayout->addWidget(treeWidget, 2, 0, 1, 5);

        gridLayout->setColumnStretch(0, 2);

        retranslateUi(QGCMAVLinkInspector);

        QMetaObject::connectSlotsByName(QGCMAVLinkInspector);
    } // setupUi

    void retranslateUi(QWidget *QGCMAVLinkInspector)
    {
        QGCMAVLinkInspector->setWindowTitle(QApplication::translate("QGCMAVLinkInspector", "MAVLink Inspector", nullptr));
        label->setText(QApplication::translate("QGCMAVLinkInspector", "System", nullptr));
        label_2->setText(QApplication::translate("QGCMAVLinkInspector", "Component", nullptr));
        clearButton->setText(QApplication::translate("QGCMAVLinkInspector", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QGCMAVLinkInspector: public Ui_QGCMAVLinkInspector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMAVLINKINSPECTOR_H
