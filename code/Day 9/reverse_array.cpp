#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{
    int start = 0;   // first value
    int end = n - 1; // last value

    while (start <= end)
    {
        swap(arr[start], arr[end]); // pre-defined function to swap two values
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Print Done!" << endl;
}

int main()
{

    // Step 1 : initialize array
    int arr[10] = {3, 6, 9, -4, 8, 14, 65, 1, 2, 12};

    int brr[7] = {3, 6, 9, -4, 8, 14, 65};

    reverse(arr, 10);
    reverse(brr, 7);

    printArray(arr, 10);
    printArray(brr, 7);

    return 0;
}