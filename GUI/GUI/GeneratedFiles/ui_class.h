/********************************************************************************
** Form generated from reading UI file 'class.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASS_H
#define UI_CLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Class
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;

    void setupUi(QWidget *Class)
    {
        if (Class->objectName().isEmpty())
            Class->setObjectName(QStringLiteral("Class"));
        Class->resize(200, 95);
        horizontalLayout = new QHBoxLayout(Class);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Class);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Bell MT"));
        font.setPointSize(14);
        font.setItalic(true);
        label->setFont(font);
        label->setTextFormat(Qt::RichText);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);


        retranslateUi(Class);

        QMetaObject::connectSlotsByName(Class);
    } // setupUi

    void retranslateUi(QWidget *Class)
    {
        Class->setWindowTitle(QApplication::translate("Class", "Class", 0));
        label->setText(QApplication::translate("Class", "Fortza fortza BTS", 0));
    } // retranslateUi

};

namespace Ui {
    class Class: public Ui_Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASS_H
