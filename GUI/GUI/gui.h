#ifndef GUI_H
#define GUI_H

#include <QtWidgets/QWidget>
#include<QPushButton>
#include"Repository.h"
#include"class.hpp"
#include "ui_gui.h"

class GUI : public QWidget
{
	Q_OBJECT

public:
	GUI(const Repository& repo,QWidget *parent = 0);
	~GUI();

private:
	Ui::GUIClass ui;
	Repository repo;
	Class* newWindow;
	void connectSlots();
	void populateList();
	void populateSorted();
	void coloreazaRosu();
	void afiseazaSuma();
};

#endif // GUI_H
