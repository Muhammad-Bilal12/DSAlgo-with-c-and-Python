#include <iostream>
using namespace std;

int main()
{

    /*
    Bitwise operator for bit manipulation

    & - AND
    | - OR
    ~ - Not
    ^ - XNOR

    */

    int a = 5, b = 7;
    // in bit 5 == 101 and 7 = 111

    // cout << "a & b " << (a & b) << endl; // 101 + 111 = 101 = 5  --- print one when both are one
    // cout << "a | b " << (a | b) << endl; // 101 | 111 = 111 = 7  --- print one when anyone are one
    // cout << "a ~ b " << (~a) << endl;    // Not 101 = 010 = 2  --- Inverse Function (catch! always return -ve value with 1 increament like 2 = -3 ; 5 = -6; 7 = -8)
    // cout << "a ^ b " << (a ^ b) << endl; // 101 + 111 = 010 = 2 --- orint one when both are differnet

    // BitWise Shift Operator

    cout << "left shift 5 " << (5 << 1) << endl;    // 5 =000000000101 ---> 0000000000001010 == 10
    cout << "left shift 5 " << (1500 << 2) << endl; // 5 =000000000101 ---> 0000000000010100 == 20
                                                    // we can say what value enter it return (number * (shift^time))

    cout << "right shit 5 " << (5 >> 1) << endl;  // 5 =000000000101 ---> 00000000000010 == 4
    cout << "right shift 5 " << (5 >> 2) << endl; // 5 =000000000101 ---> 0000000000010100 == 1
                                                  // we can say what value enter it return (number / (shift^time))

    return 0;
}