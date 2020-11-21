// Write a program that converts from miles to kilometers.
// Your program should have a reasonable prompt for the user
// to enter a number of miles.
// Hint: There are 1.609 kilometers to the mile.

#include "../../std_lib_facilities.h";

int main()
{
    double miles;
    cout << "Enter the number of miles you wish to convert to kilometers:\n";
    cin >> miles;

    double kilometers = miles / 1.609;
    cout << miles << " miles equals " << kilometers << " kilometer(s)\n";
}

