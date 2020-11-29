// Write a program that converts spelled-out numbers 
// such as "zero" and "two" into digits, such as 0 and 2. 
// When the user inputs a number, the program should 
// print out the corresponding digit. 
// Do it for the values 0, 1, 2, 3, and 4 and write out 
// "not a number I know" if the user enters something that 
// doesn't correspond, such as "stupid computer!".

#include "../../std_lib_facilities.h";

int main() {
	cout << "Enter a number: \n";
	string str;
	cin >> str;
	
	if (str == "0") cout << "zero";
	else if (str == "1") cout << "one";
	else if (str == "2") cout << "two";
	else if (str == "3") cout << "three";
	else if (str == "4") cout << "four";

	else if (str == "zero") cout << "0";
	else if (str == "one") cout << "1";
	else if (str == "two") cout << "2";
	else if (str == "three") cout << "3";
	else if (str == "four") cout << "4";

	else cout << "not a number I know";
}