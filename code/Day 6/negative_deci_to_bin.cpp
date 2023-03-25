#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    // Negative Decimal To Binary

    long long int n = -8;
    // cin>>n;

    unsigned long long int i = 0, ans = 0;

    if (n < 0)
    {
        n = pow(2, 16) + n;
    }

    while (n != 0)
    {
        int lastBit = n & 1;
        ans = (pow(10, i) * lastBit) + ans;

        n = n >> 1;
        i++;
    }

    cout << ans << endl;

    return 0;
}