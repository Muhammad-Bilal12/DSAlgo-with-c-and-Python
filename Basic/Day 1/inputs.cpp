// Inputs outputs

// Good To Know
// cout is pronounced "see-out". Used for output, and uses the insertion operator (<<)

// cin is pronounced "see-in". Used for input, and uses the extraction operator (>>)

// Include the string library
#include <string>
#include <iostream>

using namespace std;

int main()
{

    // lets make a simple form and get data from the user and show on the console.

    string name;
    int age;
    double gpa;
    char sec;
    bool isStudy;

    // name
    cout << "Enter your name :";
    cin >> name;
    // age
    cout << "Enter your age :";
    cin >> age;
    // gpa
    cout << "Enter your CGPA :";
    cin >> gpa;
    // sec
    cout << "Enter your section :";
    cin >> sec;
    cout << "are you currently learning or not [1 for yes || 0 for not] :";
    cin >> isStudy;

    cout << "\n\n";
    // Print output

    cout << "My name is " << name << endl;
    cout << "My Age is " << age << endl;
    cout << "My GPA is " << gpa << endl;
    cout << "My class section is " << sec << endl;
    cout << "is I am a Student ? " << isStudy << endl;

    return 0;
}