#include <iostream>
using namespace std;

int main()
{

    /*
    print the pattern
    1
    23
    345
    4567

    */

    int n = 4;
    int row = 1;

    while (row <= n)
    {

        // int count = row;
        int col = row;
        while (col < row + row)
        {
            cout << col << " ";
            col++;
        }
        cout << endl;
        row++;
    }

    // // two ways
    // while (row <= n)
    // {

    //     int count = row;
    //     int col = 1;
    //     while (col < row + row)
    //     {
    //         cout << count << " ";
    //         count++;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    return 0;
}