#include <iostream>
using namespace std;
int main()
{

    int n, sum = 0, count = 1;

    cout << "Enter n value to find the sum of nth value: ";
    cin >> n;

    while (n >= count) //n is inclusive
    {
        sum = sum + count;
        count++;
    }

    cout << "sum of nth number is :" << sum;

    return 0;
}