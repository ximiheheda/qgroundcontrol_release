/********************************************************************************
** Form generated from reading UI file 'QGCMapRCToParamDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCMAPRCTOPARAMDIALOG_H
#define UI_QGCMAPRCTOPARAMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QGCMapRCToParamDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label1;
    QLabel *rcParamChannelInfoLabel;
    QComboBox *rcParamChannelComboBox;
    QLabel *paramIdInfoLabel;
    QLabel *paramIdLabel;
    QLabel *label3;
    QLabel *scaleInfoLabel;
    QDoubleSpinBox *scaleDoubleSpinBox;
    QLabel *value0InfoLabel;
    QDoubleSpinBox *value0DoubleSpinBox;
    QLabel *minInfoLabel;
    QDoubleSpinBox *minValueDoubleSpinBox;
    QLabel *maxInfoLabel;
    QDoubleSpinBox *maxValueDoubleSpinBox;
    QLabel *infoLabel;
    QSpacerItem *verticalSpacer;
    QLabel *label2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QGCMapRCToParamDialog)
    {
        if (QGCMapRCToParamDialog->objectName().isEmpty())
            QGCMapRCToParamDialog->setObjectName(QString::fromUtf8("QGCMapRCToParamDialog"));
        QGCMapRCToParamDialog->resize(400, 358);
        verticalLayout = new QVBoxLayout(QGCMapRCToParamDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label1 = new QLabel(QGCMapRCToParamDialog);
        label1->setObjectName(QString::fromUtf8("label1"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label1);

        rcParamChannelInfoLabel = new QLabel(QGCMapRCToParamDialog);
        rcParamChannelInfoLabel->setObjectName(QString::fromUtf8("rcParamChannelInfoLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, rcParamChannelInfoLabel);

        rcParamChannelComboBox = new QComboBox(QGCMapRCToParamDialog);
        rcParamChannelComboBox->addItem(QString());
        rcParamChannelComboBox->addItem(QString());
        rcParamChannelComboBox->addItem(QString());
        rcParamChannelComboBox->setObjectName(QString::fromUtf8("rcParamChannelComboBox"));
        rcParamChannelComboBox->setEditable(false);

        formLayout->setWidget(1, QFormLayout::FieldRole, rcParamChannelComboBox);

        paramIdInfoLabel = new QLabel(QGCMapRCToParamDialog);
        paramIdInfoLabel->setObjectName(QString::fromUtf8("paramIdInfoLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, paramIdInfoLabel);

        paramIdLabel = new QLabel(QGCMapRCToParamDialog);
        paramIdLabel->setObjectName(QString::fromUtf8("paramIdLabel"));

        formLayout->setWidget(3, QFormLayout::FieldRole, paramIdLabel);

        label3 = new QLabel(QGCMapRCToParamDialog);
        label3->setObjectName(QString::fromUtf8("label3"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label3);

        scaleInfoLabel = new QLabel(QGCMapRCToParamDialog);
        scaleInfoLabel->setObjectName(QString::fromUtf8("scaleInfoLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, scaleInfoLabel);

        scaleDoubleSpinBox = new QDoubleSpinBox(QGCMapRCToParamDialog);
        scaleDoubleSpinBox->setObjectName(QString::fromUtf8("scaleDoubleSpinBox"));
        scaleDoubleSpinBox->setValue(1.000000000000000);

        formLayout->setWidget(5, QFormLayout::FieldRole, scaleDoubleSpinBox);

        value0InfoLabel = new QLabel(QGCMapRCToParamDialog);
        value0InfoLabel->setObjectName(QString::fromUtf8("value0InfoLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, value0InfoLabel);

        value0DoubleSpinBox = new QDoubleSpinBox(QGCMapRCToParamDialog);
        value0DoubleSpinBox->setObjectName(QString::fromUtf8("value0DoubleSpinBox"));
        value0DoubleSpinBox->setEnabled(false);
        value0DoubleSpinBox->setDecimals(8);
        value0DoubleSpinBox->setMinimum(-100000.000000000000000);
        value0DoubleSpinBox->setMaximum(100000.000000000000000);

        formLayout->setWidget(6, QFormLayout::FieldRole, value0DoubleSpinBox);

        minInfoLabel = new QLabel(QGCMapRCToParamDialog);
        minInfoLabel->setObjectName(QString::fromUtf8("minInfoLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, minInfoLabel);

        minValueDoubleSpinBox = new QDoubleSpinBox(QGCMapRCToParamDialog);
        minValueDoubleSpinBox->setObjectName(QString::fromUtf8("minValueDoubleSpinBox"));
        minValueDoubleSpinBox->setDecimals(8);
        minValueDoubleSpinBox->setMinimum(-100000.000000000000000);
        minValueDoubleSpinBox->setMaximum(100000.000000000000000);

        formLayout->setWidget(7, QFormLayout::FieldRole, minValueDoubleSpinBox);

        maxInfoLabel = new QLabel(QGCMapRCToParamDialog);
        maxInfoLabel->setObjectName(QString::fromUtf8("maxInfoLabel"));

        formLayout->setWidget(8, QFormLayout::LabelRole, maxInfoLabel);

        maxValueDoubleSpinBox = new QDoubleSpinBox(QGCMapRCToParamDialog);
        maxValueDoubleSpinBox->setObjectName(QString::fromUtf8("maxValueDoubleSpinBox"));
        maxValueDoubleSpinBox->setDecimals(8);
        maxValueDoubleSpinBox->setMinimum(-10000.000000000000000);
        maxValueDoubleSpinBox->setMaximum(100000.000000000000000);
        maxValueDoubleSpinBox->setSingleStep(1.000000000000000);
        maxValueDoubleSpinBox->setValue(10.000000000000000);

        formLayout->setWidget(8, QFormLayout::FieldRole, maxValueDoubleSpinBox);

        infoLabel = new QLabel(QGCMapRCToParamDialog);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));

        formLayout->setWidget(10, QFormLayout::LabelRole, infoLabel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(9, QFormLayout::LabelRole, verticalSpacer);

        label2 = new QLabel(QGCMapRCToParamDialog);
        label2->setObjectName(QString::fromUtf8("label2"));

        formLayout->setWidget(2, QFormLayout::SpanningRole, label2);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(QGCMapRCToParamDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QGCMapRCToParamDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QGCMapRCToParamDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QGCMapRCToParamDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QGCMapRCToParamDialog);
    } // setupUi

    void retranslateUi(QDialog *QGCMapRCToParamDialog)
    {
        QGCMapRCToParamDialog->setWindowTitle(QApplication::translate("QGCMapRCToParamDialog", "Dialog", nullptr));
        label1->setText(QApplication::translate("QGCMapRCToParamDialog", "Bind", nullptr));
        rcParamChannelInfoLabel->setText(QApplication::translate("QGCMapRCToParamDialog", "Parameter Tuning ID", nullptr));
        rcParamChannelComboBox->setItemText(0, QApplication::translate("QGCMapRCToParamDialog", "1", nullptr));
        rcParamChannelComboBox->setItemText(1, QApplication::translate("QGCMapRCToParamDialog", "2", nullptr));
        rcParamChannelComboBox->setItemText(2, QApplication::translate("QGCMapRCToParamDialog", "3", nullptr));

        rcParamChannelComboBox->setCurrentText(QApplication::translate("QGCMapRCToParamDialog", "1", nullptr));
        paramIdInfoLabel->setText(QApplication::translate("QGCMapRCToParamDialog", "Parameter", nullptr));
        paramIdLabel->setText(QApplication::translate("QGCMapRCToParamDialog", "TextLabel", nullptr));
        label3->setText(QApplication::translate("QGCMapRCToParamDialog", "with", nullptr));
        scaleInfoLabel->setText(QApplication::translate("QGCMapRCToParamDialog", "Scale (keep default)", nullptr));
        value0InfoLabel->setText(QApplication::translate("QGCMapRCToParamDialog", "Center value", nullptr));
        minInfoLabel->setText(QApplication::translate("QGCMapRCToParamDialog", "Minimum Value", nullptr));
        maxInfoLabel->setText(QApplication::translate("QGCMapRCToParamDialog", "Maximum Value", nullptr));
        infoLabel->setText(QApplication::translate("QGCMapRCToParamDialog", "Waiting for parameter refresh,,,", nullptr));
        label2->setText(QApplication::translate("QGCMapRCToParamDialog", "Tuning IDs can be mapped to channels in the RC settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QGCMapRCToParamDialog: public Ui_QGCMapRCToParamDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCMAPRCTOPARAMDIALOG_H
