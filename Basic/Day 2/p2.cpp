#include <iostream>
using namespace std;

int main()
{

    /*
    print the pattern
    1 1 1
    2 2 2
    3 3 3
    */

    int r;
    cin >> r;
    int i = 1;
    while (i <= r)
    {

        int c = 0;

        while (c < r)
        {
            cout << i << " ";
            c++;
        }
        cout << "\n";
        i++;
    }

    return 0;
}