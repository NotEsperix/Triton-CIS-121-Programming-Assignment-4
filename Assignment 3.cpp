/******************************************
* Edgardo Richard Ventura                 *
* Week 4                                  *
* Assignment 3                            *
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
	int bn, sc;
	double bp, order, total;
	// input price
	cout << "How many books would you like to order: ";
	cin >> bn;
	cout << " Enter the cost of the books on order: ";
	cin >> bp;
	// process phase
	// assignment statement = calculation
	order = bn * bp;
	if (order > 50)
		sc = 0;
	else
		sc = 25;
	total = order + sc;
	//output phase
	cout << setprecision(2) << fixed;
	cout << "\n Order Total: $" << order << endl;
	cout << " Shipping Charge: $" << sc << endl;
	cout << "Your Remaining Total is: $" << total << endl;
	return 0;
} // End of main