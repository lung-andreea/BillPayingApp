/********************************************************************************
** Form generated from reading UI file 'gui.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_H
#define UI_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUIClass
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QPushButton *sortButton;
    QPushButton *coloreazaNeplatite;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *companyLineEdit;
    QPushButton *computeButton;
    QLabel *suma;
    QPushButton *openNewWindow;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QListWidget *listaFacturi;

    void setupUi(QWidget *GUIClass)
    {
        if (GUIClass->objectName().isEmpty())
            GUIClass->setObjectName(QStringLiteral("GUIClass"));
        GUIClass->resize(600, 400);
        horizontalLayout = new QHBoxLayout(GUIClass);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        sortButton = new QPushButton(GUIClass);
        sortButton->setObjectName(QStringLiteral("sortButton"));

        verticalLayout_3->addWidget(sortButton);

        coloreazaNeplatite = new QPushButton(GUIClass);
        coloreazaNeplatite->setObjectName(QStringLiteral("coloreazaNeplatite"));

        verticalLayout_3->addWidget(coloreazaNeplatite);

        groupBox = new QGroupBox(GUIClass);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_3);

        companyLineEdit = new QLineEdit(groupBox);
        companyLineEdit->setObjectName(QStringLiteral("companyLineEdit"));

        horizontalLayout_2->addWidget(companyLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        computeButton = new QPushButton(groupBox);
        computeButton->setObjectName(QStringLiteral("computeButton"));

        verticalLayout->addWidget(computeButton);

        suma = new QLabel(groupBox);
        suma->setObjectName(QStringLiteral("suma"));
        suma->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(suma);

        openNewWindow = new QPushButton(groupBox);
        openNewWindow->setObjectName(QStringLiteral("openNewWindow"));

        verticalLayout->addWidget(openNewWindow);


        verticalLayout_3->addWidget(groupBox);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(GUIClass);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        listaFacturi = new QListWidget(GUIClass);
        listaFacturi->setObjectName(QStringLiteral("listaFacturi"));

        verticalLayout_2->addWidget(listaFacturi);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(GUIClass);

        QMetaObject::connectSlotsByName(GUIClass);
    } // setupUi

    void retranslateUi(QWidget *GUIClass)
    {
        GUIClass->setWindowTitle(QApplication::translate("GUIClass", "GUI", 0));
        sortButton->setText(QApplication::translate("GUIClass", "Sort", 0));
        coloreazaNeplatite->setText(QApplication::translate("GUIClass", "Show unpaid", 0));
        groupBox->setTitle(QApplication::translate("GUIClass", "Calculate sum to pay", 0));
        label_3->setText(QApplication::translate("GUIClass", "Company:", 0));
        computeButton->setText(QApplication::translate("GUIClass", "Compute", 0));
        suma->setText(QApplication::translate("GUIClass", "-", 0));
        openNewWindow->setText(QApplication::translate("GUIClass", "Open new Window", 0));
        label->setText(QApplication::translate("GUIClass", "Lista Facturi", 0));
    } // retranslateUi

};

namespace Ui {
    class GUIClass: public Ui_GUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_H
