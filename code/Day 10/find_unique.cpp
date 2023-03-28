#include <iostream>
using namespace std;

int findUinque(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{

    // Question Find Unique:
    // link ->  https: // bit.ly/3y01Zdu
    int arr[7] = {2, 2, 4, 3, 5, 5, 4};
    cout << "the unique element is :" << findUinque(arr, 7) << endl;

    return 0;
}