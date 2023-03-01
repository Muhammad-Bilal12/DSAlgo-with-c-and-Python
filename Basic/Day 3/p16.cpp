#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int r = 1;
    while (r <= n)
    {
        int c = 1;
        char start = 'A' + n - r;
        while (c <= r)
        {
            cout << start << " ";
            start++;
            c++;
        }
        cout << endl;

        r++;
    }

    return 0;
}