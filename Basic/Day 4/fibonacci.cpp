#include <iostream>
using namespace std;

int main()
{

    /*Fibonacci Series
    0 1 1 2 3 5 8 13 21 34 55 .....

    */

    int n;
    cout << "Enter Positive integer:";
    cin >> n;

    int a = 0; // for starting point
    int b = 1; // for second value
    int fibo = 0;

    cout << a << " " << b << " "; // for print 0 and 1;

    for (int i = 1; i <= n; i++)
    {
        fibo = a + b;
        cout << fibo << " ";
        a = b;
        b = fibo;
    }

    return 0;
}