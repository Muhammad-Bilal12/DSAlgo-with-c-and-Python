#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int r = 1;
    int count = 1;
    while (r <= n)
    {
        int c = r;
        while (c <= r)
        {
            char ch = 'A' + count - 1;
            cout << ch << " ";
            count++;
            c++;
        }
        cout << endl;
        r++;
    }

    return 0;
}