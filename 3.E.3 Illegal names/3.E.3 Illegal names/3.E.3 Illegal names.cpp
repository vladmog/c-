// Write  program that doesn't do anything, 
// but declares a number of variables with legal and illegal names 
// (such as int double = 0;), so that you can see how the compiler reacts;

#include "../../std_lib_facilities.h"

int main() {
	// int double = 0;           // invalid combination of type identifiers
	// int class = 5;            // invalid combination of type identifiers
	// int int = 5;              // invalid combination of type identifiers
	// int char = 0;             // invalid combination of type identifiers
	// int if = 0;               // Expected an identifer
	// int while = 10;           // Expected an identifer

	// string string = "string"; // No error. string is built out of more basic types and defined in a C++ library.
}