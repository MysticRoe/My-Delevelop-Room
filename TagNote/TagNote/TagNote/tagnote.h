#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_tagnote.h"

class TagNote : public QMainWindow
{
	Q_OBJECT

public:
	TagNote(QWidget *parent = Q_NULLPTR);

private:
	Ui::TagNoteClass ui;
};
