#include <iostream>
using namespace std;

int main()
{

    /*

    print the pattern

    *
    **
    ***
    ****

    */

    int n;
    cin >> n;
    int r = 1;
    while (r <= n)
    {
        int c = 1;
        while (c <= r)
        {
            cout << "* ";
            c++;
        }

        cout << endl;

        r++;
    }

    return 0;
}