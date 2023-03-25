#include <iostream>
using namespace std;

int main()
{

    /*
    print the pattern

    * * * *
    * * * *
    * * * *
    * * * *

    */

    int r;
    cin >> r;
    int i = 0;
    while (i < r)
    {
        int col = 0;
        while (col < r)
        {
            cout << "* ";
            col++;
        }
        cout << "\n";
        i++;
    }

    return 0;
}