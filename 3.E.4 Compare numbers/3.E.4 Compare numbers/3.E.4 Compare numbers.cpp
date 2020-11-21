// Write a program that prompts the user to enter two integer values. 
// Store these values in int variables names val1 and val2. 
// Write your program to determine the smaller, larger, 
// sum, difference, product, and ratio of these values 
// and report them to the user.

#include "../../std_lib_facilities.h";

int main() {
	cout << "Enter two integers\n";
	int val1;
	int val2;
	cin >> val1 >> val2;

	int greater;
	int lesser;
	if (val1 > val2) {
		greater = val1;
		lesser = val2;
		cout << greater << " is greater than " << lesser << "\n";
	}
	else if (val1 < val2) {
		greater = val2;
		lesser = val1;
		cout << greater << " is greater than " << lesser << "\n";
	}
	else {
		cout << val1 << " is equal to " << val2 << "\n";
	}

	int sum = val1 + val2;
	int difference = val1 - val2;
	int product = val1 * val2;

	cout << "sum: " << sum << "\n"
		<< "difference: " << difference << "\n"
		<< "product: " << product << "\n"
		<< "ratio: " << val1 << ":" << val2;	
}