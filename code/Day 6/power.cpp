#include <iostream>
using namespace std;

int main()
{

    int n;
    int pow;

    cout << "Enter Your number: ";
    cin >> n;
    cout << "Enter the number of power: ";
    cin >> pow;

    int ans = 1;

    for (int i = 1; i <= pow; i++)
    {

        ans = ans * n;
    }

    cout << "The power of " << n << " is to the power " << pow << " is " << ans << endl;

    return 0;
}