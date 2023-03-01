#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int r = 1;
    while (r <= n)
    {

        int c = r;
        while (c < r * 2)
        {
            char ch = 'A' + c - 1;
            cout << ch << " ";
            c++;
        }
        cout << endl;
        r++;
    }

    return 0;
}
