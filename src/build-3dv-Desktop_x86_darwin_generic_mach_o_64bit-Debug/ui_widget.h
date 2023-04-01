/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QWidget *horizontalLayoutWidget_8;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLabel *label_Vertexes;
    QLabel *label_5;
    QLabel *label_edges;
    QLabel *label_file;
    QLabel *label_11;
    QPushButton *pushButton;
    QLabel *label_Vertexes_2;
    QLabel *label_filename;
    QWidget *layoutWidget_1;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *y_rot_but;
    QLineEdit *label_y_rot;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *z_rot_but;
    QLineEdit *label_z_rot;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_13;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout;
    QLineEdit *label_x_move;
    QGridLayout *gridLayout_7;
    QPushButton *x_move_down;
    QPushButton *x_move_up;
    QLineEdit *label_y_move;
    QGridLayout *gridLayout_8;
    QPushButton *y_move_up;
    QPushButton *y_move_down;
    QLineEdit *label_z_move;
    QGridLayout *gridLayout_9;
    QPushButton *z_move_down;
    QPushButton *z_move_up;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_12;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QPushButton *button_scale_down;
    QPushButton *button_scale_up;
    QLineEdit *label_scale;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_2;
    QScrollBar *x_rotation;
    QScrollBar *y_rotation;
    QScrollBar *z_rotation;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *x_rot_but;
    QLineEdit *label_x_rot;
    QLabel *label_14;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1300, 1100);
        Widget->setMinimumSize(QSize(1300, 1100));
        Widget->setMaximumSize(QSize(1300, 1100));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 10, 151, 31));
        horizontalLayoutWidget_8 = new QWidget(Widget);
        horizontalLayoutWidget_8->setObjectName(QString::fromUtf8("horizontalLayoutWidget_8"));
        horizontalLayoutWidget_8->setGeometry(QRect(270, 50, 831, 51));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_8);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_8);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        label_Vertexes = new QLabel(horizontalLayoutWidget_8);
        label_Vertexes->setObjectName(QString::fromUtf8("label_Vertexes"));

        horizontalLayout_3->addWidget(label_Vertexes);

        label_5 = new QLabel(horizontalLayoutWidget_8);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        label_edges = new QLabel(horizontalLayoutWidget_8);
        label_edges->setObjectName(QString::fromUtf8("label_edges"));

        horizontalLayout_3->addWidget(label_edges);

        label_file = new QLabel(Widget);
        label_file->setObjectName(QString::fromUtf8("label_file"));
        label_file->setGeometry(QRect(430, 80, 661, 31));
        label_11 = new QLabel(Widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 1000, 1291, 20));
        label_11->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 20, 221, 61));
        label_Vertexes_2 = new QLabel(Widget);
        label_Vertexes_2->setObjectName(QString::fromUtf8("label_Vertexes_2"));
        label_Vertexes_2->setGeometry(QRect(520, 70, 202, 49));
        label_filename = new QLabel(Widget);
        label_filename->setObjectName(QString::fromUtf8("label_filename"));
        label_filename->setGeometry(QRect(430, 10, 621, 31));
        layoutWidget_1 = new QWidget(Widget);
        layoutWidget_1->setObjectName(QString::fromUtf8("layoutWidget_1"));
        layoutWidget_1->setGeometry(QRect(570, 1060, 161, 32));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_1);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        y_rot_but = new QPushButton(layoutWidget_1);
        y_rot_but->setObjectName(QString::fromUtf8("y_rot_but"));

        horizontalLayout_5->addWidget(y_rot_but);

        label_y_rot = new QLineEdit(layoutWidget_1);
        label_y_rot->setObjectName(QString::fromUtf8("label_y_rot"));
        label_y_rot->setMinimumSize(QSize(100, 20));
        label_y_rot->setMaximumSize(QSize(100, 20));
        label_y_rot->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_y_rot);

        layoutWidget_2 = new QWidget(Widget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(1010, 1060, 161, 32));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        z_rot_but = new QPushButton(layoutWidget_2);
        z_rot_but->setObjectName(QString::fromUtf8("z_rot_but"));

        horizontalLayout_6->addWidget(z_rot_but);

        label_z_rot = new QLineEdit(layoutWidget_2);
        label_z_rot->setObjectName(QString::fromUtf8("label_z_rot"));
        label_z_rot->setMinimumSize(QSize(100, 20));
        label_z_rot->setMaximumSize(QSize(100, 20));
        label_z_rot->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_z_rot);

        label_9 = new QLabel(Widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(290, 1060, 6, 20));
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_10 = new QLabel(Widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(736, 1060, 31, 20));
        label_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_13 = new QLabel(Widget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(1180, 1060, 20, 20));
        label_13->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        layoutWidget_3 = new QWidget(Widget);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(30, 340, 110, 241));
        verticalLayout = new QVBoxLayout(layoutWidget_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_x_move = new QLineEdit(layoutWidget_3);
        label_x_move->setObjectName(QString::fromUtf8("label_x_move"));

        verticalLayout->addWidget(label_x_move);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        x_move_down = new QPushButton(layoutWidget_3);
        x_move_down->setObjectName(QString::fromUtf8("x_move_down"));

        gridLayout_7->addWidget(x_move_down, 1, 0, 1, 1);

        x_move_up = new QPushButton(layoutWidget_3);
        x_move_up->setObjectName(QString::fromUtf8("x_move_up"));

        gridLayout_7->addWidget(x_move_up, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_7);

        label_y_move = new QLineEdit(layoutWidget_3);
        label_y_move->setObjectName(QString::fromUtf8("label_y_move"));

        verticalLayout->addWidget(label_y_move);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        y_move_up = new QPushButton(layoutWidget_3);
        y_move_up->setObjectName(QString::fromUtf8("y_move_up"));

        gridLayout_8->addWidget(y_move_up, 0, 2, 1, 1);

        y_move_down = new QPushButton(layoutWidget_3);
        y_move_down->setObjectName(QString::fromUtf8("y_move_down"));

        gridLayout_8->addWidget(y_move_down, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_8);

        label_z_move = new QLineEdit(layoutWidget_3);
        label_z_move->setObjectName(QString::fromUtf8("label_z_move"));

        verticalLayout->addWidget(label_z_move);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        z_move_down = new QPushButton(layoutWidget_3);
        z_move_down->setObjectName(QString::fromUtf8("z_move_down"));

        gridLayout_9->addWidget(z_move_down, 0, 0, 1, 1);

        z_move_up = new QPushButton(layoutWidget_3);
        z_move_up->setObjectName(QString::fromUtf8("z_move_up"));

        gridLayout_9->addWidget(z_move_up, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_9);

        layoutWidget_4 = new QWidget(Widget);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(30, 250, 1261, 44));
        horizontalLayout = new QHBoxLayout(layoutWidget_4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_7 = new QLabel(layoutWidget_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(layoutWidget_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_8);


        horizontalLayout->addLayout(verticalLayout_2);

        label_12 = new QLabel(layoutWidget_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_12);

        layoutWidget_5 = new QWidget(Widget);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(1160, 290, 127, 65));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        button_scale_down = new QPushButton(layoutWidget_5);
        button_scale_down->setObjectName(QString::fromUtf8("button_scale_down"));

        gridLayout->addWidget(button_scale_down, 0, 0, 1, 1);

        button_scale_up = new QPushButton(layoutWidget_5);
        button_scale_up->setObjectName(QString::fromUtf8("button_scale_up"));

        gridLayout->addWidget(button_scale_up, 0, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        label_scale = new QLineEdit(layoutWidget_5);
        label_scale->setObjectName(QString::fromUtf8("label_scale"));

        verticalLayout_3->addWidget(label_scale);

        layoutWidget_6 = new QWidget(Widget);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(10, 1030, 1281, 27));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        x_rotation = new QScrollBar(layoutWidget_6);
        x_rotation->setObjectName(QString::fromUtf8("x_rotation"));
        x_rotation->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(x_rotation);

        y_rotation = new QScrollBar(layoutWidget_6);
        y_rotation->setObjectName(QString::fromUtf8("y_rotation"));
        y_rotation->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(y_rotation);

        z_rotation = new QScrollBar(layoutWidget_6);
        z_rotation->setObjectName(QString::fromUtf8("z_rotation"));
        z_rotation->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(z_rotation);

        layoutWidget_7 = new QWidget(Widget);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(110, 1060, 177, 32));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        x_rot_but = new QPushButton(layoutWidget_7);
        x_rot_but->setObjectName(QString::fromUtf8("x_rot_but"));

        horizontalLayout_4->addWidget(x_rot_but);

        label_x_rot = new QLineEdit(layoutWidget_7);
        label_x_rot->setObjectName(QString::fromUtf8("label_x_rot"));
        label_x_rot->setMinimumSize(QSize(100, 20));
        label_x_rot->setMaximumSize(QSize(100, 20));
        label_x_rot->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_x_rot);

        label_14 = new QLabel(Widget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(30, 290, 241, 16));
        label_14->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \320\274\320\276\320\264\320\265\320\273\320\270:", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\262\320\265\321\200\321\210\320\270\320\275:", nullptr));
        label_Vertexes->setText(QString());
        label_5->setText(QCoreApplication::translate("Widget", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\200\320\265\320\261\320\265\321\200:", nullptr));
        label_edges->setText(QString());
        label_file->setText(QString());
        label_11->setText(QCoreApplication::translate("Widget", "\320\237\320\276\320\262\320\276\321\200\320\276\321\202 \320\274\320\276\320\264\320\265\320\273\320\270 (\320\262\320\262\320\265\320\264\320\270\321\202\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217 \320\262 \320\263\321\200\320\260\320\264\321\203\321\201\320\260\321\205 \320\276\321\202 -180 \302\260 \320\264\320\276 180\302\260)", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        label_Vertexes_2->setText(QString());
        label_filename->setText(QString());
        y_rot_but->setText(QCoreApplication::translate("Widget", "Y", nullptr));
        z_rot_but->setText(QCoreApplication::translate("Widget", "Z", nullptr));
        label_9->setText(QCoreApplication::translate("Widget", "\302\260", nullptr));
        label_10->setText(QCoreApplication::translate("Widget", "\302\260", nullptr));
        label_13->setText(QCoreApplication::translate("Widget", "\302\260", nullptr));
        x_move_down->setText(QCoreApplication::translate("Widget", "X-", nullptr));
        x_move_up->setText(QCoreApplication::translate("Widget", "X+", nullptr));
        y_move_up->setText(QCoreApplication::translate("Widget", "Y+", nullptr));
        y_move_down->setText(QCoreApplication::translate("Widget", "Y-", nullptr));
        z_move_down->setText(QCoreApplication::translate("Widget", "Z-", nullptr));
        z_move_up->setText(QCoreApplication::translate("Widget", "Z+", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "  \320\237\320\265\321\200\320\265\320\274\320\265\321\211\320\265\320\275\320\270\320\265", nullptr));
        label_8->setText(QCoreApplication::translate("Widget", "      \320\274\320\276\320\264\320\265\320\273\320\270", nullptr));
        label_12->setText(QCoreApplication::translate("Widget", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261         ", nullptr));
        button_scale_down->setText(QCoreApplication::translate("Widget", "-", nullptr));
        button_scale_up->setText(QCoreApplication::translate("Widget", "+", nullptr));
        x_rot_but->setText(QCoreApplication::translate("Widget", "X", nullptr));
        label_14->setText(QCoreApplication::translate("Widget", "(\320\262\320\262\320\265\320\264\320\270\321\202\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217 \320\276\321\202 -1.6 \320\264\320\276 1.6)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
