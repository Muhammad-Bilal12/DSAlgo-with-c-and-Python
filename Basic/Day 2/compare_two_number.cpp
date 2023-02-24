#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cout << "Enter value a :";
    cin >> a;

    cout << "Enter value v :";
    cin >> b;

    if (a > b)
    {
        cout << "A is graeter";
    }
    else if (a < b)
    {
        cout << "A is lesser";
    }
    else
    {
        cout << "A is equal to B";
    }

    return 0;
}