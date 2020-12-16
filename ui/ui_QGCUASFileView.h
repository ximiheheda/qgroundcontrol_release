/********************************************************************************
** Form generated from reading UI file 'QGCUASFileView.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCUASFILEVIEW_H
#define UI_QGCUASFILEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCUASFileView
{
public:
    QGridLayout *gridLayout;
    QPushButton *listFilesButton;
    QProgressBar *progressBar;
    QTreeWidget *treeWidget;
    QPushButton *downloadButton;
    QLabel *statusText;
    QPushButton *uploadButton;

    void setupUi(QWidget *QGCUASFileView)
    {
        if (QGCUASFileView->objectName().isEmpty())
            QGCUASFileView->setObjectName(QString::fromUtf8("QGCUASFileView"));
        QGCUASFileView->resize(216, 518);
        gridLayout = new QGridLayout(QGCUASFileView);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        listFilesButton = new QPushButton(QGCUASFileView);
        listFilesButton->setObjectName(QString::fromUtf8("listFilesButton"));

        gridLayout->addWidget(listFilesButton, 5, 1, 1, 1);

        progressBar = new QProgressBar(QGCUASFileView);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);
        progressBar->setTextVisible(false);

        gridLayout->addWidget(progressBar, 1, 0, 1, 3);

        treeWidget = new QTreeWidget(QGCUASFileView);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setContextMenuPolicy(Qt::NoContextMenu);
        treeWidget->setHeaderHidden(true);

        gridLayout->addWidget(treeWidget, 0, 0, 1, 3);

        downloadButton = new QPushButton(QGCUASFileView);
        downloadButton->setObjectName(QString::fromUtf8("downloadButton"));
        downloadButton->setEnabled(false);

        gridLayout->addWidget(downloadButton, 5, 2, 1, 1);

        statusText = new QLabel(QGCUASFileView);
        statusText->setObjectName(QString::fromUtf8("statusText"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(statusText->sizePolicy().hasHeightForWidth());
        statusText->setSizePolicy(sizePolicy);

        gridLayout->addWidget(statusText, 3, 0, 1, 3);

        uploadButton = new QPushButton(QGCUASFileView);
        uploadButton->setObjectName(QString::fromUtf8("uploadButton"));
        uploadButton->setEnabled(false);

        gridLayout->addWidget(uploadButton, 4, 2, 1, 1);


        retranslateUi(QGCUASFileView);

        QMetaObject::connectSlotsByName(QGCUASFileView);
    } // setupUi

    void retranslateUi(QWidget *QGCUASFileView)
    {
        QGCUASFileView->setWindowTitle(QApplication::translate("QGCUASFileView", "Form", nullptr));
        listFilesButton->setText(QApplication::translate("QGCUASFileView", "List Files", nullptr));
        downloadButton->setText(QApplication::translate("QGCUASFileView", "Download File", nullptr));
        statusText->setText(QString());
        uploadButton->setText(QApplication::translate("QGCUASFileView", "Upload File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QGCUASFileView: public Ui_QGCUASFileView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCUASFILEVIEW_H
