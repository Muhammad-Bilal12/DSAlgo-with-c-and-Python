#include <math.h>
#include <iostream>
using namespace std;

int main()

{

    int n = 5; // input decimal number

    int ans = 0;

    int i = 0;
    cout << n;
    while (n != 0)
    {
        int bit = n & 1;

        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }

    cout << " in binary " << ans << endl;
    return 0;
}