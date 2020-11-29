// Write a program that takes an operation 
// followed by two operands and outputs the result. 
// For example
// + 100 3.14
// 4 5
// Read the operation into a string called operation 
// and use an if-statement to figure out which operation the user wants, 
// for example,
// if (operation=="+"). Read the operands into variables of type double. 
// Implement this for operations called +,-,*,/,plus,minus,mul, and div 
// with their obvious meanings.

#include "../../std_lib_facilities.h";

int main() {

	cout << "Please enter an operation and two operands: \n";
	string operation;
	double op1;
	double op2;
	cin >> operation >> op1 >> op2;

	if (operation == "+") cout << op1 + op2;
	if (operation == "-") cout << op1 - op2;
	if (operation == "*") cout << op1 * op2;
	if (operation == "/") cout << op1 * op2;
	if (operation == "plus") cout << op1 + op2;
	if (operation == "minus") cout << op1 - op2;
	if (operation == "mul") cout << op1 * op2;
	if (operation == "div") cout << op1 / op2;
}