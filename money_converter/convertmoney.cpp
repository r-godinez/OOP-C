// convertmoney.cpp
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
	cout << "============================================\n";
	cout << "1. Convert USD to Yen.\n";
	cout << "2. Convert USD to Euros.\n";
	cout << "3. Convert USD to Pesos.\n";
	cout << "4. Convert USD to Yen, Euros, & Pesos.\n";
	cout << "============================================\n";

	switch (choice)
	{
	case 1:
		convertToYen(dollars, yen);
		break;
	case 2:
		convertToEuros(dollars, euros);
		break;
	case 3:
		convertToPesos(dollars, pesos);
		break;
	case 4:
		convertAll(dollars, euros, pesos, yen);
		break;
	default:
		cout << "Invalid input. Error!!!\n";

		break;
	}
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
	cin >> choice;
	// validate input
	while (!(cin >> choice))
	{
		cout << "Incorrect value!";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	this->choice = choice;
}