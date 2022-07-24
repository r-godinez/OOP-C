#include "convertmoney.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

Converter::Converter()
{
	choice = 0;
	usr = true;
	dollars = 0;
	euros = 1.06;
	pesos = 9.73;
	yen = 124.35;
}
// -------------------------
Converter::~Converter() {}
// -------------------------
void title()
{
	cout << "\t========================\n";
	cout << "\tMoney Converter!\n";
	cout << "\t========================\n";
}
// -------------------------
void Converter::menu()
{
}
// -------------------------
void Converter::convertAll(double dollars, double &euros, double &pesos, double &yen)
{
	double e, p, y;
	e = dollars * euros;
	cout << "\n\nEuros: ";
	cout << e;
	p = dollars * pesos;
	cout << "\nPesos: ";
	cout << p;
	y = dollars * yen;
	cout << "\nYen: ";
	cout << y << endl;
}
// -------------------------
double Converter::convertToYen(double dollars, double &yen)
{
	return (dollars * yen);
}
// -------------------------
double Converter::convertToEuros(double dollars, double &euros)
{
	return (dollars * euros);
}
// -------------------------
double Converter::convertToPesos(double dollars, double &pesos)
{
	return (dollars * pesos);
}
// -------------------------
void Converter::setChoice()
{
	// validate input
	cin >> choice;
	this->choice = choice;
}