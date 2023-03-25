
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

    // string txt = "Muhammad bilal";
    // cout << txt.length();

    // you can also try .size() method
    // cout << txt.size();

    // Access String

    // we can access string by just by just refer its index number

    // string greet = "hello";

    // char ch = greet[0];

    // cout << ch << endl;
    /** Note: String indexes start with 0: [0] is the first character. [1] is the second character, etc. */

    // change first character of string

    // string myString = "Hello";
    // myString[0] = 'J';
    // cout << myString << endl;

    // String Special Character
    //  String written in double qoutes so C++ misunderstood speacial character

    // Use backslash( \ ) to turns special character to an string

    // string sp = "that\'s why she called Mader-e-Millat \"The Mother of the Nation\"";
    // cout << sp << endl;

    // Usre Input String
    //  cin considers a space (whitespace, tabs, etc) as a terminating character, which means that it can only display a single word (even if you type many words.

    // getLine() Function, cin as first parameter and string as second veriable
    string fullname;

    // cout << "Enter your full name: ";
    // getline(cin, fullname);
    // cout << fullname;

    // C++ String Namespace || Omitting NameSpace

    // You might see some C++ programs that runs without the standard namespace library.
    //  The using namespace std line can be omitted and replaced with the std keyword, followed by the :: operator for string (and cout) objects:

std::cout<<"Omiting namespace";


    return 0;
}