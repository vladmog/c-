// Modify `Compare numbers` to ask the user to enter floating-point values and store them in double variables. 
// Compare the outputs of the two programs for some inputs of your choice. 
// Are the results the same? 
	// Provided the same input and modifying everything from int to double: yes.
// Should they be? 
	// Yes
// What's the difference?
	// You can now use floating point numbers, which will make the ratio output non-sensical.


#include "../../std_lib_facilities.h";

int main() {
	cout << "Enter two integers\n";
	double val1;
	double val2;
	cin >> val1 >> val2;

	double greater;
	double lesser;
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

	double sum = val1 + val2;
	double difference = val1 - val2;
	double product = val1 * val2;

	cout << "sum: " << sum << "\n"
		<< "difference: " << difference << "\n"
		<< "product: " << product << "\n"
		<< "ratio: " << val1 << ":" << val2;
}