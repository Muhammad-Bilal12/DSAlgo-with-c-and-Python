#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int r = 1;
    while (r <= n)
    {
        int space = r - 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        int c = n - 1;
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