/********************************************************************************
** Form generated from reading UI file 'tagnote.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAGNOTE_H
#define UI_TAGNOTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TagNoteClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TagNoteClass)
    {
        if (TagNoteClass->objectName().isEmpty())
            TagNoteClass->setObjectName(QStringLiteral("TagNoteClass"));
        TagNoteClass->resize(600, 400);
        menuBar = new QMenuBar(TagNoteClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        TagNoteClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TagNoteClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TagNoteClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(TagNoteClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        TagNoteClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(TagNoteClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TagNoteClass->setStatusBar(statusBar);

        retranslateUi(TagNoteClass);

        QMetaObject::connectSlotsByName(TagNoteClass);
    } // setupUi

    void retranslateUi(QMainWindow *TagNoteClass)
    {
        TagNoteClass->setWindowTitle(QApplication::translate("TagNoteClass", "TagNote", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TagNoteClass: public Ui_TagNoteClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAGNOTE_H
