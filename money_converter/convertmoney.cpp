// -----------------------------------------------
// convertmoney.cpp
// -----------------------------------------------
#include "convertmoney.h" // convertmoney class
#include <iostream>		  // for cout
#include <iomanip>		  //
#include <cstdlib>		  // for exit function
using namespace std;
// -----------------------------------------------
Converter::Converter()
{
	choice = 0;	  // choice set to 0, null input
	usr = true;	  // program is active as long as usr is true
	dollars = 0;  // initalize $0 USD
	euros = 1.06; // ratio to USD
	pesos = 9.73; // ratio to USD
	yen = 124.35; // ratio to USD
}
// -----------------------------------------------
Converter::~Converter() {} // deconstructor
// -----------------------------------------------
void title()
{
	cout << "\t========================\n";
	cout << "\tMoney Converter!\n";
	cout << "\t========================\n";
}
// -----------------------------------------------
void Converter::menu()
{
	cout << "============================================\n";
	cout << "1. Convert USD to Yen.\n";
	cout << "2. Convert USD to Euros.\n";
	cout << "3. Convert USD to Pesos.\n";
	cout << "4. Convert USD to Yen, Euros, & Pesos.\n";
	cout << "5. Quit Program\n";
	cout << "============================================\n\n";
}
// -----------------------------------------------
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
// -----------------------------------------------
double Converter::convertToYen(double d, double &y)
{
	return (d * y);
}
// -----------------------------------------------
double Converter::convertToEuros(double d, double &e)
{
	return (d * e);
}
// -----------------------------------------------
double Converter::convertToPesos(double d, double &p)
{
	return (d * p);
}
// -----------------------------------------------
void Converter::quitProgram()
{
	usr = false;
}
// -----------------------------------------------
void Converter::selection()
{
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
	case 5:
		quitProgram();
		break;
	default:
		cout << "Invalid input. Error!!!\n";
		break;
	}
}
// -----------------------------------------------
void Converter::validateChoice()
{
	int c = 0;
	while (1)
	{
		cout << "Enter a choice base off the menu (1 - 5): ";
		if (cin >> c)
		{
			if (c >= 1 && c <= 5)
			{
				choice = c;
				break;
			}
		}
		else
		{
			cout << "\n\nInvalid Input! Please input a numerical value.\n";
			cin.clear();
			while (cin.get() != '\n')
				;
		}
	}
}
// -----------------------------------------------
void Converter::setBalance()
{
	double d = 0;
	while (1)
	{
		cout << "Enter the $USD amount you wish to convert: ";
		if (cin >> d)
		{
			if (d >= 0 && !(d < 0))
			{
				dollars = d;
				break;
			}
		}
		else
		{
			cout << "\n\nInvalid Input! Please input a numerical value.\n";
			cin.clear();
			while (cin.get() != '\n')
				;
		}
	}
}
// -----------------------------------------------