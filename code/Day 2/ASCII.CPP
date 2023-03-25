#include <iostream>
using namespace std;

int main()
{

    char ch = 'Z';
    cout << "Enter your character ";
    cin >> ch;
    if (ch >= 65 && ch <= 'Z')
    {
        cout << "ch is capital letter ";
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "ch is Small letter ";
    }
    else
    {
        cout << "ch is number ";
    }

    cout << ch;
}