// Write a program that prompts the user to enter some 
// number of pennies, nickels, dimes, quarters, half dollars, 
// and one-dollar coins. Query the user separately for the 
// number of each size coin, 
// e.g., "How many pennies do you have?" 
// Then your program should print out something like this:

// You have 23 pennies
// You have 17 nickels
// You have 14 dimes
// You have 7 quarters
// You have 3 half dollars
// The value of all of your coins is 573 cents.

// Make some improvements; if only one of a coin is reported, 
// make the output grammatically correct,e.g., 14 dimes and 1 dime (not 1 dimes). 
// Also, report the sum in dollars and cents, i.e., $5.73 instead of 573 cents.

#include "../../std_lib_facilities.h";

int main() {
	int pennies;
	int nickels;
	int dimes;
	int quarters;
	int half_dollars;
	
	cout << "How many pennies do you have?\n";
	cin >> pennies;
	cout << "How many nickels do you have?\n";
	cin >> nickels;
	cout << "How many dimes do you have?\n";
	cin >> dimes;
	cout << "How many quarters do you have?\n";
	cin >> quarters;
	cout << "How many half dollars do you have?\n";
	cin >> half_dollars;

	if (pennies != 1)
		cout << "You have " << pennies << " pennies\n";
	else 
		cout << "You have " << pennies << " penny\n";


	if (nickels != 1)
		cout << "You have " << nickels << " nickels\n";
	else
		cout << "You have " << nickels << " nickel\n";

	if (dimes != 1)
		cout << "You have " << dimes << " dimes\n";
	else
		cout << "You have " << dimes << " dime\n";

	if (quarters != 1)
		cout << "You have " << quarters << " quarters\n";
	else
		cout << "You have " << quarters << " quarter\n";

	if (half_dollars != 1)
		cout << "You have " << half_dollars << " half_dollars\n";
	else
		cout << "You have " << half_dollars << " half_dollar\n";

	int value = (pennies * 1) + (nickels * 5) + (dimes * 10) + (quarters * 25) + (half_dollars * 50);
	double dollars = value * 0.01;

	cout << "The value of all of your coins is " << value << " cents, or $" << dollars << " dollars.\n";
}