#include <iostream>
using namespace std;

int main()
{

    /*
    Print the pattern
    321
    321
    321
    */

    int r;
    cin >> r;
    int i = 1;
    while (i <= r)
    {
        int c = 1;
        while (c <= r)
        {
            cout << r - c + 1 << " "; // 3 - 1 +1 = 3, 3 -2 +1 = 2 , 3-3+1 =1
            c++;
        }

        cout << endl;
        i++;
    }

    return 0;
}