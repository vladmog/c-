// Rewrite the character value example from the previous example to use a for-statement. 
// Then modify your program to also write out a table of the integer values for uppercase letters and digits.

#include "../../std_lib_facilities.h";

int main() {
	constexpr int stepsToUpper = 32;
	for (int i = 0; 'a' + i - 1 != 'z'; ++i) {
		cout 
			<< char('a' + i) << "\t" << 'a' + i 
			<< "\t\t" 
			<< char('a' + i - stepsToUpper) << "\t" << 'a' + i - stepsToUpper 
			<< "\n";
	}
}