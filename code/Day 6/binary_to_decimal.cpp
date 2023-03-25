#include <math.h>
#include <iostream>
using namespace std;

int main()
{

    // Binary to Decimal

    int n = 010001101; // input

    int ans = 0, i = 0;

    while (n != 0)
    {

        // get last digit
        int digit = n % 10;

        if (digit)
        {
            ans = ans + pow(2, i);
        }

        n = n / 10;
        i++;
    }

    cout << ans;

    return 0;
}
