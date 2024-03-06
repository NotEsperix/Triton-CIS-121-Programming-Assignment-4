/******************************************
* Edgardo Richard Ventura                 *
* Week 4                                  *
* Assignment 2                            *
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
	double up, total;
	// input price
	cout << "Welcome to Bobby's Bathsalts and Bombs \nPlease type in only one of the items you would like to purchase?\nBathsalts or
		Bombs: ";
		cin >> i;
	cout << "Great! How many are you looking to purchase: ";
	cin >> q;
	// process phase
	// assignment statement = calculation
	if (i == "Bathsalts" || i == "bathsalts" || i == "Bathsalt" || i == "bathsalt")
		up = 10.00f;
	else if (i == "Bombs" || i == "bombs" || i == "Bomb" || i == "bomb")
		up = 20.00f;
	else
		up = 0; // Default price if an invalid item is entered
	total = q * up;
	//output phase
	if (i == "Bathsalts" || i == "bathsalts" || i == "Bathsalt" || i == "bathsalt")
		cout << "\nWow, staying hygenic with style I see. Your mother must be so proud of you <3" <<
		"\nGod knows I wish my daughters were like you, maybe I'd have grandchildren by now." <<
		"\nYour " << q << " bathsalt crate(s) will be shipped to you in the span of a fortnight." <<
		"\n\nA singular bathsalt crate cost: $ " << up <<
		"\nThe merchandise total comes to: $" << total <<
		"\nWe appreciate the patronage, please come again." << endl;
	else if (i == "Bombs" || i == "bombs" || i == "Bomb" || i == "bomb")
		cout << "\nFantastic, seems like somones going to have an explosive holiday!" <<
		"\nYour " << q << " totally legit and legal merchandise will be placed in barrels without fragile stickers" <<
		"\nand will be handed off to our minimum wage knights over at DHL to bring it to you in about a fortnight." <<
		"\n\nEach barrel you purchase (before shipping) costs: $ " << up <<
		"\nThe merchandise total (before shipping) comes to: $" << total <<
		"\nWe appreciate the patronage, please come again." << endl;
	else
		cout << "\nUh-oh, looks like someone's joshing me right now.\nPlease leave or we'll summon the forces of Lord Balthazar to
		escort you." << endl;
		return 0;
} // End of main