// Rewrite your currency converter program to use a switch-statement. 

#include "../../std_lib_facilities.h";

int main() {
	constexpr double dollarPerYen = 0.0096;
	constexpr double dollarPerKrone = 0.11;
	constexpr double dollarPerPound = 1.33;

	double amount = 0.00;
	char currency = 'a';

	cout << "Input currency amount and type ('y', 'k', 'p') to convert to dollars\n";
	cin >> amount >> currency;

	switch (currency) {
	case 'y':
		cout << amount << " yen == $" << amount * dollarPerYen << ".\n";
		break;
	case 'k':
		cout << amount << " krone == $" << amount * dollarPerKrone << ".\n";
		break;
	case 'p':
		cout << amount << " pounds == $" << amount * dollarPerPound << ".\n";
		break;
	default:
		cout << currency << " is not a valid input.\n";
		break;
	}
}