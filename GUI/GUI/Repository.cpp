#include "Repository.h"
#include<fstream>
#include<sstream>
#include<string.h>
#include<algorithm>
#include<assert.h>

vector<Factura> Repository::getAllSorted()
{
	vector<Factura> v(this->facturi.size());
	copy(this->facturi.begin(), this->facturi.end(), v.begin());
	sort(v.begin(), v.end(), [](Factura& fac1, Factura& fac2) {return fac1.suma > fac2.suma; });
	return v;
}

int Repository::computeSum(const string & company)
{
	int s=0;
	for (auto fac : facturi)
		if (fac.companie == company && fac.platita==false)
			s += fac.suma;
	return s;
}

void Repository::readFromFile()
{
	ifstream f(this->filename);
	Factura fac;
	while (f >> fac)
		this->facturi.push_back(fac);
	f.close();
}

void Repository::testFunction()
{
	assert(computeSum("RDS") == 419);
}

istream& operator >> (istream& is, Factura& fac)
{
	string str;
	is >> str;
	char* ch = new char[str.length() + 1];
	strcpy(ch, str.c_str());
	char* p;
	p = strtok(ch, ",");
	if (p == NULL)
		return is;
	fac.companie = p;
	p = strtok(NULL, ",");
	fac.serie = p;
	p = strtok(NULL, ",");
	int suma = atoi(p);
	fac.suma = suma;
	p = strtok(NULL, ",");
	int r = atoi(p);
	bool pl = r == 0 ? false : true;
	fac.platita = pl;
	delete[] ch;
	return is;
}