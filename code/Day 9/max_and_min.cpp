#include <iostream>
using namespace std;

int getMax(int arr[], int n)
{
    // for maximum:

    // step 4: lets initialize a temporary variable to store max value with initializing minimum value

    // int max = INT_MIN;
    int max = arr[0];

    // step 5: run a loop and check with all the value of array
    for (int i = 0; i < n; i++)
    {
        // step 6: if value found which is greater than max then reinitialize with max
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // step 7: return the value of max
    return max;
}

int getMin(int arr[], int n)
{
    // for minimum:

    // step 4: lets initialize a temporary variable to store min value with initializing maximum value

    // int min = INT_MAX;
    int min = arr[0];

    // step 5: run a loop and check with all the value of array
    for (int i = 0; i < n; i++)
    {
        // step 6: if value found which is less than min then reinitialize with min
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    // step 7: return the value of min
    return min;
}

// main function
int main()
{
    //   Find maximum and minimum of an integer array

    // Step1 : input to find the size of array

    int size;
    cout << "Enter size of array : " << endl;
    cin >> size;

    // step2: Declare an int array

    int arr[100];
    /*
        - Kiya hm ye kr skte he?

        int arr[size] ;

       - nhi, ye bad practice he. hm ek large size of array bna de ge aur user ko keh de k ap
        k pass itni space he value inter krne k liye
    */

    // Step3 : get user value and assign to an integer
    for (int i = 0; i < size; i++)
    {
        cout << "Enter your " << i + 1 << " value: ";
        cin >> arr[i];
    }

    //   Lets make a function for min and max

    cout << "The maximum value is " << getMax(arr, size) << endl;
    cout << "The minimum value is " << getMin(arr, size) << endl;

    return 0;
}