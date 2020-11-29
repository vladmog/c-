// Use an if else statement to write a program that converts 
// yen ('y'), kroner ('k'), and pounds ('p') into dollars.

#include "../../std_lib_facilities.h";

int main() {
	constexpr double dollarPerYen = 0.0096;
	constexpr double dollarPerKrone = 0.11;
	constexpr double dollarPerPound = 1.33;

	cout << "Convert currency to dollars\n"
		<< "Input amount of currency, followed by type ('y', 'k', or 'p'):\n";

	char currency = 'a';
	double amount = 0.00;
	cin >> amount >> currency ;

	if (currency == 'y')
		cout << amount << " yen equals $" << amount * dollarPerYen << "\n";
	else if (currency == 'k')
		cout << amount << " kroner equals $" << amount * dollarPerKrone << "\n";
	else if (currency == 'p')
		cout << amount << " pounds equals $" << amount * dollarPerPound << "\n";
	else
		cout << currency << " is not a valid input for this program.\n";
}