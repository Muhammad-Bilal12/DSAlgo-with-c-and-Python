#include <iostream>
using namespace std;

int main()
{

    int n;

    cin >> n;

    int r = 1;
    while (r <= n)
    {
        int space = n - r;
        while (space)
        {
            cout << " ";
            space--;
        }
        int col = 1;
        while (col <= r)
        {
            cout << "*";
            col++;
        }
        cout << endl;
        r++;
    }

    return 0;
}