#include <iostream>
using namespace std;

int main()
{

    /*
        * Print the Pattern

        1 2 3 4
        1 2 3 4
        1 2 3 4
        1 2 3 4
    */

    int r;
    int i = 1;
    cin >> r;
    while (i <= r)
    {
        int c = 1;
        while (c <= r)
        {
            cout << c << " ";
            c++;
        }
        cout << "\n";
        i++;
    }

    return 0;
}