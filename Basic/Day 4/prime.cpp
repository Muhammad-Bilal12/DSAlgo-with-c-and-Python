#include <iostream>
using namespace std;

int main()
{
    // Find prime or not

    int n;
    cout << "Enter your number: ";
    cin >> n;
    bool isPrime = 1;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
    {
        cout << "Prime";
    }
    else
    {
        cout << "Not Prime!";
    }

    return 0;
}