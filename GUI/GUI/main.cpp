#include "gui.h"
#include"Repository.h"
#include <QtWidgets/QApplication>
#include<qdebug>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Repository repo{ "file.txt" };
	repo.readFromFile();
	repo.testFunction();
	GUI w{repo};
	w.show();
	return a.exec();
}
