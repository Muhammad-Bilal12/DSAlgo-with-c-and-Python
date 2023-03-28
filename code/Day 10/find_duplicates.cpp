#include <iostream>
using namespace std;

int findDuplicates(int arr[], int size)
{
    int ans = 0;

    // XOR-ing all array element
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    // Xor [1, N-1]
    for (int i = 1; i < size; i++)
    {
        // cout << i << " ";
        ans = ans ^ i;
    }
    return ans;
}

int main()
{

    // Question Find Duplicates:
    // link ->  https://bit.ly/3dm6bdZ

    int arr[7] = {1, 2, 3, 4, 5, 6, 6};
    cout << "the Duplicate element is :" << findDuplicates(arr, 7) << endl;

    return 0;
}