// convertmoney.cpp
#include <iostream>

#include "convertmoney.h"
#include <iomanip>
#include <cstdlib>
// used to get stream size
#include <ios>
// used to get numeric limits
#include <limits>
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
}
// -------------------------
void Converter::convertAll(double balance)
{
	double e, p, y;
	e = balance * euros;
	cout << "\n\nEuros: ";
	cout << e;
	p = balance * pesos;
	cout << "\nPesos: ";
	cout << p;
	y = balance * yen;
	cout << "\nYen: ";
	cout << y << endl;
}
// -------------------------
double Converter::convertToYen(double balance)
{
	return (balance * yen);
}
// -------------------------
double Converter::convertToEuros(double balance)
{
	return (balance * euros);
}
// -------------------------
double Converter::convertToPesos(double balance)
{
	return (balance * pesos);
}
// -------------------------
void Converter::setChoice()
{
	// validate input - Need to test
	while (!(cin >> choice))
	{
		cout << "Incorrect value!";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	this->choice = choice;
}