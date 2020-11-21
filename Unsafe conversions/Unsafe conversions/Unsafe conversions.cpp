#include "../../std_lib_facilities.h"

int main()
{
    double d = 0;
    while (cin >> d) {                   // repeat the statements below
                                         // as long as we type in numbers
        int i = d;                       // try to squeeze a double into an int
        char c = i;                      // try to squeeze an int into a char
        int i2 = c;                      // get the integer value of the character

        cout << "d==" << d                  // the original double
            << " i==" << i                  // converted to int
            << " i2==" << i2                // int value of char
            << " char(" << c << ")\n";      // the char
    }

    //double x{ 2.7 };      // (uniform || universal) initialization notation
    //int y{ x };           // avoids narrowing by causing compiler error
    //cout << "y: " << y;   // when attempting an unsafe conversion
}

//2
//d == 2 i == 2 i2 == 2 char()

//3
//d == 3 i == 3 i2 == 3 char()

//127
//d == 127 i == 127 i2 == 127 char()

//128
//d == 128 i == 128 i2 == -128 char(Ç)

//129
//d == 129 i == 129 i2 == -127 char(ü)

//130
//d == 130 i == 130 i2 == -126 char(é)

//1000
//d == 1000 i == 1000 i2 == -24 char(Φ)

//1001
//d == 1001 i == 1001 i2 == -23 char(Θ)

//56.9
//d == 56.9 i == 56 i2 == 56 char(8)

//56.2
//d == 56.2 i == 56 i2 == 56 char(8)