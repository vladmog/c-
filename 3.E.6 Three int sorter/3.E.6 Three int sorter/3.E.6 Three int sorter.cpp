// Write a program that prompt the user to enter three integer values,
// and then outputs the values in numerical sequence separated by commas.
// So, if the user enters the values 10 4 6, the output should be 4, 6, 10. 
// If two values are the same, they should just be ordered together. 
// So, the input 4 5 4 should give 4, 4, 5.


// given 1 2 3
// possible:
	// 1 2 3
	// 1 3 2
	// 2 1 3
	// 2 3 1
	// 3 1 2
	// 3 2 1

#include "../../std_lib_facilities.h";

int main() {
	int num1;
	int num2;
	int num3;

	cout << "Please enter three integers: \n";
	cin >> num1 >> num2 >> num3;

	if (num1 <= num2) {
		// num1 <= num2
		if (num3 <= num1) {
			// num3 <= num1 <= num2
			cout << num3 << ", " << num1 << ", " << num2;
		} else if (num2 <= num3) {
			// num1 <= num2 <= num3
			cout << num1 << ", " << num2 << ", " << num3;
		}
		else {
			// num1 <= num3 <= num2
			cout << num1 << ", " << num3 << ", " << num2;
		}

	}
	else {
		// num2 <= num1
		if (num3 <= num2) {
			// num3 <= num2 <= num1
			cout << num3 << ", " << num2 << ", " << num1;
		}
		else if (num1 <= num3) {
			// num2 <= num1 <= num3
			cout << num2 << ", " << num1 << ", " << num3;
		}
		else {
			// num2 <= num3 <= num1
			cout << num2 << ", " << num3 << ", " << num1;
		}
	}
}