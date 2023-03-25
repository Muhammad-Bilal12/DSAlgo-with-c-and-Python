#include <iostream>
using namespace std;

int main()
{

    //   Print Prime or not

    int n = 8;
    // cout<<"Enter Your Number : "<<endl;
    // cin>>n;

    bool isPrime = 1;

    // To check for all value starting from 2
    for (int i = 2; i < n; i++)
    {

        // If is divisible then break the loop
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
    {
        cout << "Prime Number";
    }
    else
    {
        cout << "Not a Prime Number";
    }

    return 0;
}