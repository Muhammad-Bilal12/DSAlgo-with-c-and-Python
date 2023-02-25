#include <iostream>
using namespace std;

int main()
{

    // Find sum of all even till n

    int n, sum = 0;
    cin >> n;
    int i = 1;
    while (i <= n) // i is inclusive
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        i++;
    }
    cout << sum;

    return 0;
}