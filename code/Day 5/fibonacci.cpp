#include <iostream>
using namespace std;

int main()
{

    int n = 10;
    // cin>>n; // for taking input
    int a = 0, b = 1;

    cout << a << " " << b << " "; // for printing two values

    for (int i = 0; i < n; i++)
    {
        int next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }

    return 0;
}