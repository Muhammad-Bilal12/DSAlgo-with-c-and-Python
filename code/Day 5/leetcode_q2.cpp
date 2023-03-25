#include <iostream>
using namespace std;

int main()
{

    // Question 191: Count Number of ! Bits

    unsigned int n = 31;

    int count = 0;

    while (n != 0)
    {
        // Checking last bit is 1 or not
        if (n & 1)
        {
            // If last bit 1 then [1 & 1 = 1] which is True
            count++; // Increase the counter
        }
        n = n >> 1;
    }

    cout << count;
}