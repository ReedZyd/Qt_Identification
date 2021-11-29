/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *video;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *face1;
    QLineEdit *name;
    QLineEdit *semb;
    QLabel *face2;
    QLineEdit *name2;
    QLabel *face3;
    QLabel *face4;
    QLabel *face5;
    QLineEdit *name3;
    QLineEdit *name4;
    QLineEdit *name5;
    QLineEdit *semb2;
    QLineEdit *semb3;
    QLineEdit *semb4;
    QLineEdit *semb5;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1358, 862);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        video = new QLabel(centralWidget);
        video->setObjectName(QStringLiteral("video"));
        video->setGeometry(QRect(10, 10, 961, 831));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(video->sizePolicy().hasHeightForWidth());
        video->setSizePolicy(sizePolicy1);
        video->setFrameShape(QFrame::WinPanel);
        video->setFrameShadow(QFrame::Sunken);
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(1070, 40, 176, 33));
        QFont font;
        font.setFamily(QStringLiteral("Century Schoolbook L"));
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        lineEdit->setFont(font);
        lineEdit->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1120, 830, 81, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        font1.setItalic(false);
        pushButton->setFont(font1);
        face1 = new QLabel(centralWidget);
        face1->setObjectName(QStringLiteral("face1"));
        face1->setEnabled(true);
        face1->setGeometry(QRect(1100, 100, 121, 171));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(face1->sizePolicy().hasHeightForWidth());
        face1->setSizePolicy(sizePolicy2);
        face1->setFrameShape(QFrame::NoFrame);
        face1->setFrameShadow(QFrame::Sunken);
        name = new QLineEdit(centralWidget);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(1090, 280, 142, 24));
        QFont font2;
        font2.setFamily(QStringLiteral("Times New Roman"));
        name->setFont(font2);
        name->setAlignment(Qt::AlignCenter);
        semb = new QLineEdit(centralWidget);
        semb->setObjectName(QStringLiteral("semb"));
        semb->setGeometry(QRect(1090, 310, 142, 24));
        semb->setFont(font1);
        semb->setAlignment(Qt::AlignCenter);
        face2 = new QLabel(centralWidget);
        face2->setObjectName(QStringLiteral("face2"));
        face2->setGeometry(QRect(1010, 350, 121, 161));
        face2->setFrameShape(QFrame::NoFrame);
        face2->setFrameShadow(QFrame::Sunken);
        name2 = new QLineEdit(centralWidget);
        name2->setObjectName(QStringLiteral("name2"));
        name2->setGeometry(QRect(1020, 520, 101, 21));
        name2->setFont(font2);
        name2->setAlignment(Qt::AlignCenter);
        face3 = new QLabel(centralWidget);
        face3->setObjectName(QStringLiteral("face3"));
        face3->setGeometry(QRect(1190, 350, 121, 161));
        face3->setFrameShape(QFrame::NoFrame);
        face3->setFrameShadow(QFrame::Sunken);
        face4 = new QLabel(centralWidget);
        face4->setObjectName(QStringLiteral("face4"));
        face4->setGeometry(QRect(1010, 580, 121, 161));
        face4->setFrameShape(QFrame::NoFrame);
        face4->setFrameShadow(QFrame::Sunken);
        face5 = new QLabel(centralWidget);
        face5->setObjectName(QStringLiteral("face5"));
        face5->setGeometry(QRect(1190, 580, 121, 161));
        face5->setFrameShape(QFrame::NoFrame);
        face5->setFrameShadow(QFrame::Sunken);
        name3 = new QLineEdit(centralWidget);
        name3->setObjectName(QStringLiteral("name3"));
        name3->setGeometry(QRect(1200, 520, 101, 21));
        name3->setFont(font2);
        name3->setAlignment(Qt::AlignCenter);
        name4 = new QLineEdit(centralWidget);
        name4->setObjectName(QStringLiteral("name4"));
        name4->setGeometry(QRect(1020, 750, 101, 21));
        name4->setFont(font2);
        name4->setAlignment(Qt::AlignCenter);
        name5 = new QLineEdit(centralWidget);
        name5->setObjectName(QStringLiteral("name5"));
        name5->setGeometry(QRect(1200, 750, 101, 21));
        name5->setFont(font2);
        name5->setAlignment(Qt::AlignCenter);
        semb2 = new QLineEdit(centralWidget);
        semb2->setObjectName(QStringLiteral("semb2"));
        semb2->setGeometry(QRect(1020, 550, 101, 21));
        semb2->setFont(font2);
        semb2->setAlignment(Qt::AlignCenter);
        semb3 = new QLineEdit(centralWidget);
        semb3->setObjectName(QStringLiteral("semb3"));
        semb3->setGeometry(QRect(1200, 550, 101, 21));
        semb3->setFont(font2);
        semb3->setAlignment(Qt::AlignCenter);
        semb4 = new QLineEdit(centralWidget);
        semb4->setObjectName(QStringLiteral("semb4"));
        semb4->setGeometry(QRect(1020, 780, 101, 21));
        semb4->setFont(font2);
        semb4->setAlignment(Qt::AlignCenter);
        semb5 = new QLineEdit(centralWidget);
        semb5->setObjectName(QStringLiteral("semb5"));
        semb5->setGeometry(QRect(1200, 780, 101, 21));
        semb5->setFont(font2);
        semb5->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);
        QWidget::setTabOrder(pushButton, name);
        QWidget::setTabOrder(name, semb);
        QWidget::setTabOrder(semb, lineEdit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SDU Face Recognize", Q_NULLPTR));
        video->setText(QString());
        lineEdit->setText(QApplication::translate("MainWindow", "Results", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        face1->setText(QString());
        face2->setText(QString());
        face3->setText(QString());
        face4->setText(QString());
        face5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
