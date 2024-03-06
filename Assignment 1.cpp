/******************************************
* Edgardo Richard Ventura                 *
* Week 4                                  *
* Assignment 1                            *
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
	string i;
	int q;
	float tax = 0.07f;
	float up;
	double total, exp, b4t;
	// input price
	cout << " Enter the color of didgeridoo(s) you'd like to purchase: ";
	cin >> i;
	cout << "Enter the quanatity of didgeridoo(s) you'd like to purchase: ";
	cin >> q;
	// process phase
	// assignment statement = calculation
	if (q >= 1000)
		up = 3.0f;
	else
		up = 5.0f;
	b4t = up * q;
	exp = b4t * tax;
	total = exp + b4t;
	//output phase
	cout << "\nYou chose to buy " << q << " " << i << " didgeridoos at a cost of " << up << " each!" << endl;
	cout << " The unit price total is: $" << b4t << endl;
	cout << " (7%) Tax: $" << exp << endl;
	cout << "So your total comes out to be: $" << total << endl;
	return 0;
} // End of main