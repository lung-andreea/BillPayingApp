#pragma once
#include<vector>
using namespace std;

typedef struct
{
	string companie;
	string serie;
	int suma;
	bool platita;
}Factura;

class Repository
{
private:
	vector<Factura> facturi;
	string filename;
public:
	Repository(const string& filename) :filename{filename} {};
	~Repository() {};
	vector<Factura> getFacturi() { return facturi; };
	vector<Factura> getAllSorted();
	int computeSum(const string& company);
	void readFromFile();
	void testFunction();
};

istream& operator >> (istream& is, Factura& fac);
