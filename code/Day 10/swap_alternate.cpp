#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]); // update the original array
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int even[8] = {-4, 5, 7, 8, 9, 5, 0, 3};
    int odd[5] = {5, 7, 76, 89, 6};

    // Swap alternative
    swapAlternate(even, 8);
    printArray(even, 8);

    // for odd
    swapAlternate(odd, 5);
    printArray(odd, 5);

    return 0;
}