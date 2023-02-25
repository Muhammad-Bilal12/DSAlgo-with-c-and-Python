#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter Positive number :";
    cin >> n;

    int div = 2;
    while (div < n)
    {
        if (n % div == 0)
        {
            cout << n << " is not prime";
            return 0;
        }

        div++;
    }
    cout << n << " is Prime";

    return 0;
}