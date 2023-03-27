#include <iostream>
using namespace std;

int sumArray(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main()
{

    int arr[10] = {23, 5, 1, 4, 6, 8, 8, 9, 4, 6};

    // print the sum of array
    int sum = sumArray(arr, 10);

    cout << "the sum of array is : " << sum << endl;

    return 0;
}
