/******************************************
* Edgardo Richard Ventura                 *
* Week 4                                  *
* Assignment 5                            *
* Frank Alvino                            *
* CIS 121-061                             *
*******************************************/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	// define variables
	// syntax data type variable name
	string ln;
	int dep;
	double gross, adjusted, itax, rtax;
	// input price
	cout << "Enter your last name: ";
	cin >> ln;
	cout << "Enter the number of dependents: ";
	cin >> dep;
	cout << "Enter your gross income: ";
	cin >> gross;

	// process phase
	// assignment statement = calculation
	adjusted = gross - (dep * 12000);
	if (adjusted > 50000)
		rtax = .020;
	else
		rtax = 0.10;
	itax = adjusted * rtax;
	if (itax <= 0)
		itax = 100;
	else
		itax = itax;

	//output phase
	cout << setprecision(2) << fixed;
	cout << "Last Name: " << ln << endl;
	cout << "Gross Income: $" << gross << endl;
	cout << "Number of Dependents: " << dep << endl;
	cout << "Adjusted Gross Income: $" << adjusted << endl;
	cout << "Income Tax: $" << itax << endl;
	return 0;
} // End of main