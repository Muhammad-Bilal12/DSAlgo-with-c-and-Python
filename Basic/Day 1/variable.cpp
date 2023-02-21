#include <iostream>
using namespace std;

int main()
{

    /*
    int - stores integers (whole numbers), without decimals, such as 123 or -123
    double - stores floating point numbers, with decimals, such as 19.99 or -19.99
    char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
    string - stores text, such as "Hello World". String values are surrounded by double quotes
    bool - stores values with two states: true or false
    */

    int myAge = 20;          // Integer (whole number without decimals)
    double myGpa = 3.59;     // Floating point number (with decimals)
    char myLetter = 'D';     // Character
    string myName = "Bilal"; // String (text)
    bool myBoolean = true;   // Boolean (1 - true or 0 - false)

    cout << "My name is " << myName << endl;
    cout << "My Age is " << myAge << endl;
    cout << "My GPA is " << myGpa << endl;
    cout << "My class section is " << myLetter << endl;
    cout << "is I am a Student ?" << myBoolean << endl;

    const double piValue = 3.69;
    
    return 0;

}