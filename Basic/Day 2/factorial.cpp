#include <iostream>
using namespace std;

int main()
{

    int n, count = 1, fact = 1;

    cout << "Enter n value to find the Factorial of nth value: ";
    cin >> n;

/**
 * to find factorial of 5
 * 5*4*3*2*1 = 120
*/

    while (count <= n)
    {
       fact *= count;
       count++;

    }

    cout<<"factorial of "<<n<<" is :"<<fact;
    

    return 0;
}