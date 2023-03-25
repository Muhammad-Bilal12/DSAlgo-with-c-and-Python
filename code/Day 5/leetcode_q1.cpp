#include <iostream>
using namespace std;

int main()
{

    // Question 1: Subtract the (Product and sum of the Digit) of an integer

    int n;
    cout << "Enter your Digit" << endl;
    cin >> n;

    // To calculate the total product and sum
    int product = 1, sum = 0;
    int ans;
    while (n)
    {
        // first find product
        product = product * (n % 10);
        sum += n % 10; // sum = sum + n % 10

        n = n / 10; // for remove last digit of an integer
        ans = product - sum;
    }
    cout << ans;

    return 0;
}

// We can also define class
class Solution
{
public:
    int subtractProductAndSum(int n)
    {

        int prod = 1;
        int sum = 0;

        while (n != 0)
        {

            int digit = n % 10;
            prod = prod * digit;
            sum = sum + digit;

            n = n / 10;
        }

        int answer = prod - sum;
        return answer;
    }
};