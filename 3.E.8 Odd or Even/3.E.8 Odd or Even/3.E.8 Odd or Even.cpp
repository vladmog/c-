// Write a program to test an integer value to determine if it is odd or even. 
// As always, make sure your output is clear and complete. In other words, 
// don't just output yes or no. Your output should stand alone, like 
// "The value 4 is an even number". 
// Hint: See the remainder (modulo) operator.

#include "../../std_lib_facilities.h";

int main() {
	cout << "Input an integer: \n";
	
	int integer;
	cin >> integer;

	if (integer % 2 == 0)
		cout << "The value " << integer << " is an even number\n";
	else {
		cout << "The value " << integer << " is an odd number\n";
	}
}
