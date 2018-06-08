#include "tagnote.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	TagNote w;
	w.show();
	return a.exec();
}
