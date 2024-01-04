/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Open;
    QAction *action_Save;
    QAction *action_Reset;
    QAction *action_Exit;
    QAction *action_Help;
    QAction *actionAbout_Qt;
    QAction *actionDisplay_Original_Image;
    QWidget *centralwidget;
    QFrame *frame;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QFrame *line_2;
    QGridLayout *gridLayout;
    QSlider *sliderG;
    QSpinBox *sb_G;
    QSlider *sliderB;
    QLabel *label_2;
    QSpinBox *sb_R;
    QSpinBox *sb_B;
    QLabel *label_1;
    QLabel *label_3;
    QSlider *sliderR;
    QLabel *label;
    QFrame *frame_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QFrame *line;
    QGridLayout *gridLayout_2;
    QPushButton *pb_hsv;
    QPushButton *pb_ycrcb;
    QPushButton *pb_hsl;
    QPushButton *pb_gray;
    QFrame *frame_3;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_9;
    QFrame *line_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *pb_laplace;
    QPushButton *pb_histogram;
    QFrame *frame_4;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QFrame *line_3;
    QGridLayout *gridLayout_3;
    QLabel *label_8;
    QPushButton *pb_filterApply;
    QPushButton *pb_gaussian;
    QPushButton *pb_median;
    QPushButton *pb_average;
    QSpinBox *kernal;
    QFrame *frame_5;
    QLabel *label_4;
    QPushButton *pushButton;
    QFrame *line_5;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(752, 580);
        QFont font;
        font.setFamily(QString::fromUtf8("\350\217\257\345\272\267\345\260\221\345\245\263\346\226\207\345\255\227W7"));
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        MainWindow->setFont(font);
        MainWindow->setMouseTracking(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/photoshop_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("*{\n"
"font-family: \"\350\217\257\345\272\267\345\260\221\345\245\263\346\226\207\345\255\227W7\";\n"
"	font: 9pt;\n"
"font-size:20px;\n"
"}\n"
"\n"
"QFrame{\n"
"background:rgb(170, 170, 170);\n"
"}\n"
"\n"
"QPushButton{\n"
"background:rgb(220,220, 220);\n"
"color:rgb(55, 55, 55);\n"
"border-radius:10px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background:rgb(6, 139, 255);\n"
"color:rgb(233, 239, 255);\n"
"border-radius:10px;\n"
"}\n"
"\n"
"QMessageBox{\n"
"background:rgb(170, 170, 170);\n"
"font-size:14px;\n"
"}"));
        action_Open = new QAction(MainWindow);
        action_Open->setObjectName(QString::fromUtf8("action_Open"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Open->setIcon(icon1);
        action_Save = new QAction(MainWindow);
        action_Save->setObjectName(QString::fromUtf8("action_Save"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Save->setIcon(icon2);
        action_Reset = new QAction(MainWindow);
        action_Reset->setObjectName(QString::fromUtf8("action_Reset"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/reset.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Reset->setIcon(icon3);
        action_Exit = new QAction(MainWindow);
        action_Exit->setObjectName(QString::fromUtf8("action_Exit"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Exit->setIcon(icon4);
        action_Help = new QAction(MainWindow);
        action_Help->setObjectName(QString::fromUtf8("action_Help"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/question.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Help->setIcon(icon5);
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/image/info.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout_Qt->setIcon(icon6);
        actionDisplay_Original_Image = new QAction(MainWindow);
        actionDisplay_Original_Image->setObjectName(QString::fromUtf8("actionDisplay_Original_Image"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/image/magnifying-glass.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDisplay_Original_Image->setIcon(icon7);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 10, 351, 201));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 30, 331, 161));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(10, 10, 10, 10);
        line_2 = new QFrame(verticalLayoutWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setLineWidth(5);
        line_2->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        sliderG = new QSlider(verticalLayoutWidget);
        sliderG->setObjectName(QString::fromUtf8("sliderG"));
        sliderG->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderG, 1, 1, 1, 1);

        sb_G = new QSpinBox(verticalLayoutWidget);
        sb_G->setObjectName(QString::fromUtf8("sb_G"));

        gridLayout->addWidget(sb_G, 1, 2, 1, 1);

        sliderB = new QSlider(verticalLayoutWidget);
        sliderB->setObjectName(QString::fromUtf8("sliderB"));
        sliderB->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderB, 2, 1, 1, 1);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        sb_R = new QSpinBox(verticalLayoutWidget);
        sb_R->setObjectName(QString::fromUtf8("sb_R"));

        gridLayout->addWidget(sb_R, 0, 2, 1, 1);

        sb_B = new QSpinBox(verticalLayoutWidget);
        sb_B->setObjectName(QString::fromUtf8("sb_B"));

        gridLayout->addWidget(sb_B, 2, 2, 1, 1);

        label_1 = new QLabel(verticalLayoutWidget);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setLayoutDirection(Qt::LeftToRight);
        label_1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_1, 0, 0, 1, 1);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        sliderR = new QSlider(verticalLayoutWidget);
        sliderR->setObjectName(QString::fromUtf8("sliderR"));
        sliderR->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderR, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 0, 201, 31));
        label->setAlignment(Qt::AlignCenter);
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(380, 10, 351, 181));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget_2 = new QWidget(frame_2);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 10, 331, 161));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_2->setContentsMargins(10, 10, 10, 10);
        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_6);

        line = new QFrame(verticalLayoutWidget_2);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(5);
        line->setFrameShape(QFrame::HLine);

        verticalLayout_2->addWidget(line);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(10);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(6, 6, 6, 6);
        pb_hsv = new QPushButton(verticalLayoutWidget_2);
        pb_hsv->setObjectName(QString::fromUtf8("pb_hsv"));

        gridLayout_2->addWidget(pb_hsv, 0, 0, 1, 1);

        pb_ycrcb = new QPushButton(verticalLayoutWidget_2);
        pb_ycrcb->setObjectName(QString::fromUtf8("pb_ycrcb"));

        gridLayout_2->addWidget(pb_ycrcb, 1, 1, 1, 1);

        pb_hsl = new QPushButton(verticalLayoutWidget_2);
        pb_hsl->setObjectName(QString::fromUtf8("pb_hsl"));

        gridLayout_2->addWidget(pb_hsl, 0, 1, 1, 1);

        pb_gray = new QPushButton(verticalLayoutWidget_2);
        pb_gray->setObjectName(QString::fromUtf8("pb_gray"));

        gridLayout_2->addWidget(pb_gray, 1, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(10, 230, 351, 141));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget_4 = new QWidget(frame_3);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(10, 10, 331, 121));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setSpacing(10);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(10, 10, 10, 10);
        label_9 = new QLabel(verticalLayoutWidget_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_9);

        line_4 = new QFrame(verticalLayoutWidget_4);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShadow(QFrame::Plain);
        line_4->setLineWidth(5);
        line_4->setFrameShape(QFrame::HLine);

        verticalLayout_4->addWidget(line_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pb_laplace = new QPushButton(verticalLayoutWidget_4);
        pb_laplace->setObjectName(QString::fromUtf8("pb_laplace"));

        horizontalLayout->addWidget(pb_laplace);

        pb_histogram = new QPushButton(verticalLayoutWidget_4);
        pb_histogram->setObjectName(QString::fromUtf8("pb_histogram"));

        horizontalLayout->addWidget(pb_histogram);


        verticalLayout_4->addLayout(horizontalLayout);

        frame_4 = new QFrame(centralwidget);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(380, 210, 351, 161));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget_3 = new QWidget(frame_4);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 10, 331, 143));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(10);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_3->setContentsMargins(10, 10, 10, 10);
        label_7 = new QLabel(verticalLayoutWidget_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_7);

        line_3 = new QFrame(verticalLayoutWidget_3);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setLineWidth(5);
        line_3->setFrameShape(QFrame::HLine);

        verticalLayout_3->addWidget(line_3);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(10);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(6, 6, 6, 6);
        label_8 = new QLabel(verticalLayoutWidget_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_8, 2, 0, 1, 1);

        pb_filterApply = new QPushButton(verticalLayoutWidget_3);
        pb_filterApply->setObjectName(QString::fromUtf8("pb_filterApply"));

        gridLayout_3->addWidget(pb_filterApply, 2, 2, 1, 1);

        pb_gaussian = new QPushButton(verticalLayoutWidget_3);
        pb_gaussian->setObjectName(QString::fromUtf8("pb_gaussian"));

        gridLayout_3->addWidget(pb_gaussian, 0, 2, 1, 1);

        pb_median = new QPushButton(verticalLayoutWidget_3);
        pb_median->setObjectName(QString::fromUtf8("pb_median"));

        gridLayout_3->addWidget(pb_median, 0, 1, 1, 1);

        pb_average = new QPushButton(verticalLayoutWidget_3);
        pb_average->setObjectName(QString::fromUtf8("pb_average"));

        gridLayout_3->addWidget(pb_average, 0, 0, 1, 1);

        kernal = new QSpinBox(verticalLayoutWidget_3);
        kernal->setObjectName(QString::fromUtf8("kernal"));

        gridLayout_3->addWidget(kernal, 2, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout_3);

        frame_5 = new QFrame(centralwidget);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(10, 390, 721, 111));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(300, 10, 111, 21));
        pushButton = new QPushButton(frame_5);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(250, 60, 221, 31));
        line_5 = new QFrame(frame_5);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(200, 40, 311, 3));
        line_5->setFrameShadow(QFrame::Plain);
        line_5->setLineWidth(5);
        line_5->setFrameShape(QFrame::HLine);
        MainWindow->setCentralWidget(centralwidget);
        frame_5->raise();
        frame_2->raise();
        frame->raise();
        frame_3->raise();
        frame_4->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 752, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(action_Open);
        menuFile->addAction(action_Save);
        menuFile->addSeparator();
        menuFile->addAction(actionDisplay_Original_Image);
        menuFile->addAction(action_Reset);
        menuFile->addSeparator();
        menuFile->addAction(action_Exit);
        menuHelp->addAction(action_Help);
        menuHelp->addAction(actionAbout_Qt);
        toolBar->addAction(action_Open);
        toolBar->addAction(action_Save);
        toolBar->addAction(action_Reset);
        toolBar->addAction(actionDisplay_Original_Image);
        toolBar->addAction(action_Help);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Photoshop", nullptr));
        action_Open->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
#if QT_CONFIG(shortcut)
        action_Open->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Save->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
#if QT_CONFIG(shortcut)
        action_Save->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Reset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
#if QT_CONFIG(shortcut)
        action_Reset->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Exit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        action_Help->setText(QCoreApplication::translate("MainWindow", "Help", nullptr));
        actionAbout_Qt->setText(QCoreApplication::translate("MainWindow", "About Qt", nullptr));
        actionDisplay_Original_Image->setText(QCoreApplication::translate("MainWindow", "Display Original Image", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "    G    ", nullptr));
        label_1->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Channel", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "CVT Color", nullptr));
        pb_hsv->setText(QCoreApplication::translate("MainWindow", "HSV", nullptr));
        pb_ycrcb->setText(QCoreApplication::translate("MainWindow", "YCrCb", nullptr));
        pb_hsl->setText(QCoreApplication::translate("MainWindow", "HLS", nullptr));
        pb_gray->setText(QCoreApplication::translate("MainWindow", "Gray", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Sharpening", nullptr));
        pb_laplace->setText(QCoreApplication::translate("MainWindow", "Laplace", nullptr));
        pb_histogram->setText(QCoreApplication::translate("MainWindow", "Histogram", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Blur", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Kernal:", nullptr));
        pb_filterApply->setText(QCoreApplication::translate("MainWindow", "Apply", nullptr));
        pb_gaussian->setText(QCoreApplication::translate("MainWindow", "Gaussian", nullptr));
        pb_median->setText(QCoreApplication::translate("MainWindow", "Median", nullptr));
        pb_average->setText(QCoreApplication::translate("MainWindow", "Average", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Application", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Find Edge", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
