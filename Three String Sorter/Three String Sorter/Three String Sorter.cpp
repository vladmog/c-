// Do exercise 6, but with string values. 
// So, if the user enters the values 
// Steinbeck, Hemingway, Fitzgerald, 
// the output should be 
// Fitzgerald, Hemingway, Steinbeck.


#include "../../std_lib_facilities.h";

int main() {
	string str1;
	string str2;
	string str3;

	cout << "Please enter three strings: \n";
	cin >> str1 >> str2 >> str3;

	if (str1 <= str2) {
		// str1 <= str2
		if (str3 <= str1) {
			// str3 <= str1 <= str2
			cout << str3 << ", " << str1 << ", " << str2;
		}
		else if (str2 <= str3) {
			// str1 <= str2 <= str3
			cout << str1 << ", " << str2 << ", " << str3;
		}
		else {
			// str1 <= str3 <= str2
			cout << str1 << ", " << str3 << ", " << str2;
		}

	}
	else {
		// num2 <= num1
		if (str3 <= str2) {
			// str3 <= str2 <= str1
			cout << str3 << ", " << str2 << ", " << str1;
		}
		else if (str1 <= str3) {
			// str2 <= str1 <= str3
			cout << str2 << ", " << str1 << ", " << str3;
		}
		else {
			// str2 <= str3 <= str1
			cout << str2 << ", " << str3 << ", " << str1;
		}
	}
}