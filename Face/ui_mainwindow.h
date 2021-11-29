/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *video;
    QPushButton *pushButton;
    QLabel *face;
    QLabel *video_face;
    QLabel *name;
    QLabel *post_frot;
    QLabel *similar;
    QLabel *name_frot;
    QLabel *post;
    QLabel *gender_frot;
    QLabel *gender;
    QLabel *age_frot;
    QLabel *age;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1080, 1920);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        video = new QLabel(centralWidget);
        video->setObjectName(QString::fromUtf8("video"));
        video->setGeometry(QRect(20, 60, 1040, 1200));
        sizePolicy.setHeightForWidth(video->sizePolicy().hasHeightForWidth());
        video->setSizePolicy(sizePolicy);
        QFont font;
        font.setItalic(true);
        video->setFont(font);
        video->setFrameShape(QFrame::WinPanel);
        video->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(460, 1720, 160, 35));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        pushButton->setFont(font1);
        face = new QLabel(centralWidget);
        face->setObjectName(QString::fromUtf8("face"));
        face->setEnabled(true);
        face->setGeometry(QRect(760, 1320, 220, 350));
        sizePolicy.setHeightForWidth(face->sizePolicy().hasHeightForWidth());
        face->setSizePolicy(sizePolicy);
        face->setFrameShape(QFrame::Box);
        face->setFrameShadow(QFrame::Sunken);
        face->setScaledContents(true);
        video_face = new QLabel(centralWidget);
        video_face->setObjectName(QString::fromUtf8("video_face"));
        video_face->setEnabled(true);
        video_face->setGeometry(QRect(100, 1320, 200, 351));
        sizePolicy.setHeightForWidth(video_face->sizePolicy().hasHeightForWidth());
        video_face->setSizePolicy(sizePolicy);
        video_face->setFrameShape(QFrame::Box);
        video_face->setFrameShadow(QFrame::Sunken);
        video_face->setScaledContents(true);
        name = new QLabel(centralWidget);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(550, 1300, 160, 50));
        sizePolicy.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Ubuntu"));
        font2.setPointSize(25);
        font2.setBold(true);
        font2.setWeight(75);
        name->setFont(font2);
        name->setFrameShape(QFrame::StyledPanel);
        name->setFrameShadow(QFrame::Sunken);
        name->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        post_frot = new QLabel(centralWidget);
        post_frot->setObjectName(QString::fromUtf8("post_frot"));
        post_frot->setGeometry(QRect(370, 1350, 160, 50));
        sizePolicy.setHeightForWidth(post_frot->sizePolicy().hasHeightForWidth());
        post_frot->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setPointSize(25);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setWeight(75);
        post_frot->setFont(font3);
        post_frot->setLayoutDirection(Qt::LeftToRight);
        post_frot->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        similar = new QLabel(centralWidget);
        similar->setObjectName(QString::fromUtf8("similar"));
        similar->setGeometry(QRect(460, 1520, 160, 160));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(similar->sizePolicy().hasHeightForWidth());
        similar->setSizePolicy(sizePolicy3);
        similar->setLayoutDirection(Qt::LeftToRight);
        name_frot = new QLabel(centralWidget);
        name_frot->setObjectName(QString::fromUtf8("name_frot"));
        name_frot->setGeometry(QRect(370, 1300, 160, 50));
        QFont font4;
        font4.setPointSize(25);
        font4.setBold(true);
        font4.setWeight(75);
        name_frot->setFont(font4);
        name_frot->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        post = new QLabel(centralWidget);
        post->setObjectName(QString::fromUtf8("post"));
        post->setGeometry(QRect(550, 1350, 160, 50));
        post->setFont(font4);
        post->setLayoutDirection(Qt::LeftToRight);
        post->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        gender_frot = new QLabel(centralWidget);
        gender_frot->setObjectName(QString::fromUtf8("gender_frot"));
        gender_frot->setGeometry(QRect(370, 1400, 160, 50));
        sizePolicy.setHeightForWidth(gender_frot->sizePolicy().hasHeightForWidth());
        gender_frot->setSizePolicy(sizePolicy);
        gender_frot->setFont(font3);
        gender_frot->setLayoutDirection(Qt::LeftToRight);
        gender_frot->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        gender = new QLabel(centralWidget);
        gender->setObjectName(QString::fromUtf8("gender"));
        gender->setGeometry(QRect(550, 1400, 160, 50));
        gender->setFont(font4);
        gender->setLayoutDirection(Qt::LeftToRight);
        gender->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        age_frot = new QLabel(centralWidget);
        age_frot->setObjectName(QString::fromUtf8("age_frot"));
        age_frot->setGeometry(QRect(370, 1450, 160, 50));
        sizePolicy.setHeightForWidth(age_frot->sizePolicy().hasHeightForWidth());
        age_frot->setSizePolicy(sizePolicy);
        age_frot->setFont(font3);
        age_frot->setLayoutDirection(Qt::LeftToRight);
        age_frot->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        age = new QLabel(centralWidget);
        age->setObjectName(QString::fromUtf8("age"));
        age->setGeometry(QRect(550, 1450, 160, 50));
        age->setFont(font4);
        age->setLayoutDirection(Qt::LeftToRight);
        age->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SDU Face Recognize", nullptr));
        video->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        face->setText(QString());
        video_face->setText(QString());
        name->setText(QString());
        post_frot->setText(QApplication::translate("MainWindow", "\350\272\253\344\273\275:", nullptr));
        similar->setText(QString());
        name_frot->setText(QApplication::translate("MainWindow", "\345\247\223\345\220\215:", nullptr));
        post->setText(QString());
        gender_frot->setText(QApplication::translate("MainWindow", "\346\200\247\345\210\253:", nullptr));
        gender->setText(QString());
        age_frot->setText(QApplication::translate("MainWindow", "\345\271\264\351\276\204:", nullptr));
        age->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
