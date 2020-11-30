// The character 'b' is char('a'+1), 'c' is char('a'+2), etc. 
// Use a loop to write out a table of characters with their corresponding integer values:
//  a   97
//  b   98
//  ...
//  z   122

#include "../../std_lib_facilities.h";

int main()
{
	int i = 0;
	while (char('a' + i - 1) != 'z')
	{
		cout << char('a' + i) << "\t" << i << "\n";
		i++;
	}
}