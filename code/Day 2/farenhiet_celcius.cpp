#include <iostream>
using namespace std;

int main()
{

    float farenheit;
    cout << "Enter Farenhiet: ";
    cin >> farenheit;

    float celcius = (5.0 / 9) * (farenheit - 32);
    cout << "farenheit " << farenheit << " to Celcius is " << celcius;
    ;
    return 0;
}