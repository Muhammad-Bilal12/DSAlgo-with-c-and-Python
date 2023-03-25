#include <iostream>
using namespace std;

int main()
{

    // Condittion if statement

    /** Note that if is in lowercase letters. Uppercase letters (If or IF) will generate an error.*/

    float gpa;
    cout << "Enter your gpa: ";
    cin >> gpa;

    // if statement

    // if (gpa > 3)
    // {
    //     cout << "Excellent!";
    // }

    // if - else statement

    // if (gpa > 3)
    // {
    //     cout << "Excellent!";
    // }
    // else
    // {
    //     cout << "Poor!";
    // }

    // if - else if - else statement

    // if (gpa >= 3)
    // {
    //     cout << "Excellent!";
    // }
    // else if (gpa >= 2)
    // {
    //     cout<<"Good!";
    // }

    // else
    // {
    //     cout << "Poor!";
    // }

    // Ternary operator

    gpa > 3 ? cout << "Excellent" : cout << "Poor";

    return 0;
}