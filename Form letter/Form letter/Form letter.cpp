#include "../../std_lib_facilities.h"

int main()
{
    string first_name;
    string friend_name;
    char friend_sex = 0;
    int age = 0;

    cout << "Enter the name of the person you want to write to.\n";
    cin >> first_name;

    cout << "Enter the name of a friend\n";
    cin >> friend_name;

    cout << "Enter the sex of the friend (m or f).\n";
    cin >> friend_sex;

    cout << "Enter your recipient's age.\n";
    cin >> age;
    if (age < 0) {
        simple_error("you're kidding!");
        //cout << "You're kidding\n";               // using cout instead of error allows user to correct error
        cout << "Enter your recipient's age.\n";
        cin >> age;
    }

    if (age > 110) {
        simple_error("you're kidding!");
        // cout << "You're kidding\n";              // using cout instead of error allows user to correct error
        cout << "Enter your recipient's age.\n";
        cin >> age;
    }

    cout << "Dear " << first_name << ",\n"
        << "   How are you? I am fine. I miss you.\n"
        << "Have you seen " << friend_name << " lately?\n";
    
    if (friend_sex == 'm')   // note the use of single quotes as this is a char not a string
        cout << "If you see " << friend_name << " please ask him to call me.\n";
    
    if (friend_sex == 'f') 
        cout << "If you see " << friend_name << " please ask her to call me.\n";
    
    cout << "I hear you just had a birthday and you are " << age << " years old.\n";

    if (age < 12)
        cout << "Next year you will be " << age + 1 << "\n";
    if (age == 17)
        cout << "Next year you will be able to vote.\n";
    if (age > 70)
        cout << "I hope you are enjoying retirement.\n";

    cout << "\nYours sincerely,\nVladislav\n\n";


}
