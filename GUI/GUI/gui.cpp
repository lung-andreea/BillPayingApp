#include "gui.h"

GUI::GUI(const Repository& repo,QWidget *parent) : repo(repo), QWidget(parent)
{
	ui.setupUi(this);
	this->newWindow = new Class{};
	populateList();
	this->connectSlots();
}

GUI::~GUI()
{

}

void GUI::connectSlots()
{
	QObject::connect(ui.sortButton, &QPushButton::clicked,this,&GUI::populateSorted);
	QObject::connect(ui.coloreazaNeplatite, &QPushButton::clicked, this, &GUI::coloreazaRosu);
	QObject::connect(ui.computeButton, &QPushButton::clicked, this, &GUI::afiseazaSuma);
	QObject::connect(ui.openNewWindow, &QPushButton::clicked, this->newWindow, &QWidget::show);
}

void GUI::populateList()
{
	vector<Factura> v = repo.getFacturi();
	this->ui.listaFacturi->clear();
	for (auto fac : v)
	{
		string pl = fac.platita == true ? "platita" : "NEplatita";
		QListWidgetItem* item = new QListWidgetItem(QString::fromStdString(fac.companie + ", " + fac.serie + ", " + to_string(fac.suma) + ", " + pl));
		ui.listaFacturi->addItem(item);
	}
}

void GUI::populateSorted()
{
	vector<Factura> v = repo.getAllSorted();
	this->ui.listaFacturi->clear();
	for (auto fac : v)
	{
		string pl = fac.platita == true ? "platita" : "NEplatita";
		QListWidgetItem* item = new QListWidgetItem(QString::fromStdString(fac.companie + ", " + fac.serie + ", " + to_string(fac.suma) + ", " + pl));
		ui.listaFacturi->addItem(item);
	}
}

void GUI::coloreazaRosu()
{
	vector<Factura> v = repo.getFacturi();
	this->ui.listaFacturi->clear();
	for (auto fac : v)
	{
		string pl = fac.platita == true ? "platita" : "NEplatita";
		QListWidgetItem* item = new QListWidgetItem(QString::fromStdString(fac.companie + ", " + fac.serie + ", " + to_string(fac.suma) + ", " + pl));
		if (fac.platita == false)
			item->setBackground(QBrush(Qt::red));
		ui.listaFacturi->addItem(item);
	}
}

void GUI::afiseazaSuma()
{
	string company = (ui.companyLineEdit->text()).toStdString();
	ui.suma->setText(QString::fromStdString(to_string(repo.computeSum(company))));
}


