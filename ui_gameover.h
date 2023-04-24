/********************************************************************************
** Form generated from reading UI file 'gameover.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEOVER_H
#define UI_GAMEOVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gameover
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *gameover)
    {
        if (gameover->objectName().isEmpty())
            gameover->setObjectName(QStringLiteral("gameover"));
        gameover->resize(480, 700);
        label = new QLabel(gameover);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 200, 341, 231));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush1(QColor(255, 0, 0, 128));
        brush1.setStyle(Qt::SolidPattern);
//        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
//        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        QBrush brush3(QColor(0, 0, 0, 128));
        brush3.setStyle(Qt::SolidPattern);
//        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
        label->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\226\260\351\255\217"));
        font.setPointSize(14);
        label->setFont(font);
        label->setFocusPolicy(Qt::NoFocus);
        pushButton = new QPushButton(gameover);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 430, 211, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\226\260\351\255\217"));
        font1.setPointSize(12);
        pushButton->setFont(font1);

        retranslateUi(gameover);

        QMetaObject::connectSlotsByName(gameover);
    } // setupUi

    void retranslateUi(QWidget *gameover)
    {
        gameover->setWindowTitle(QApplication::translate("gameover", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("gameover", "GAME OVER", Q_NULLPTR));
        pushButton->setText(QApplication::translate("gameover", "remake", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gameover: public Ui_gameover {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEOVER_H
