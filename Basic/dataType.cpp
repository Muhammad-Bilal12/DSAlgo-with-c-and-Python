#include <iostream>
using namespace std;

int main()
{

    // Data Type and Variable

    int a = 10;
    int b = -20;
    cout << a << "\t" << b << endl;

    float deci = 34.4;
    double decim = 123.456423;
    cout << deci << "\t" << decim << endl;

    char d = '@';
    cout << d << endl;

    bool isTrue = true;
    bool isfalse = false;
    cout << isTrue << "\t" << isfalse << endl;

    // Some more Data type

    // what happen when we store negative value on unsigned variable

    unsigned int n = -102;
    cout << n << endl;
    // it give some wrong output like 4294967194

    // Find the size of variable Data type

    return 0;
}
