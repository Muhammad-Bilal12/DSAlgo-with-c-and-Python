#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int r = 1;
    while (r <= n)
    {
        int c = n - r + 1;
        while (c >= 1)
        {
            cout << "* ";
            c--;
        }
        cout << endl;
        r++;
    }

    return 0;
}