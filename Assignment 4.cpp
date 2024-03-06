/******************************************
* Edgardo Richard Ventura                 *
* Week 4                                  *
* Assignment 4                            *
* Frank Alvino                            *
* CIS 121-061                             *
*******************************************/
#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;
int main()
{
	// define variables
	// syntax data type variable name
	string an;
	double ap, wp, total;
	// input price
	cout << "** Welcome to Arrugula Ape's Appliences **" << endl;
	cout << "\nThis kiosk is designed to help you check the applience's warrenty coverage\nPlease enter the appliences name: ";
	cin >> ws;
	getline(cin, an);
	cout << "Please enter the price attached: $";
	cin >> ap;
	// process phase
	// assignment statement = calculation
	if (ap > 1000)
		wp = 0.10 * ap;
	else
		wp = 0.05 * ap;
	total = ap + wp;
	//output phase
	cout << setprecision(2) << fixed;
	cout << "\nLooks like your " << an;
	if (ap > 1000)
		cout << " applience falls under the plantain warranty\nYoull be covered for the next 24 months!" << endl;
	else
		cout << " applience falls under the banana warranty\nYoull be covered for the next 12 months!" << endl;
	cout << "Your " << an << " cost before the warenty: $" << ap << endl;
	cout << "Your warrenty will cost: $" << wp << endl;
	cout << "Your total Pay outcomes: $" << total << endl;
	return 0;
} // End of main