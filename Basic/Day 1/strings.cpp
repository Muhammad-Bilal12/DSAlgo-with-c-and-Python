
#include <string> // for Strings
#include <iostream>

using namespace std;

int main()
{

    // string text = "Hello World!";
    // cout << text << endl;

    // Concatenation
    // Use + operator to concatenate two string with each other

    // string firstName, lastName;

    // cin >> firstName >> lastName;

    // cout << firstName + " " + lastName << endl;
    // // we can also use .append () method

    // cout << firstName.append(" ").append(lastName);

    // ! Warning
    /*
    WARNING!

    C++ uses the + operator for both addition and concatenation.

    Numbers are added. Strings are concatenated.
    */

    //    number with String

    // string x = "Bilal";
    // int num = 123;

    // string res = x + num;

    // cout<<res;

    // * it throws an error (no operands found)

    // string length ==> .length()

    string txt = "Muhammad bilal";
    cout << txt.length();

    // you can also try .size() method
    cout << txt.size();

    return 0;
}