#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{

    // step 4: check value 1 by 1, if key is present return true else return false
    for (int i = 0; i < size; i++)
    {
        // check the value
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{

    // Find the given element in an array

    // bool indicate the availability of the key
    bool isAvailable;

    // Step 1 : initialize array
    int arr[10] = {3, 6, 9, -4, 8, 14, 65, 1, 2, 12};

    // Step 2: get user input which value to found
    int key;
    cout << "Enter your key to found : " << endl;
    cin >> key;

    // step 3: Create a function and call it
    isAvailable = search(arr, 10, key);

    if (isAvailable)
    {
        cout << "Key is Found!" << endl;
    }
    else
    {

        cout << "Key is not Found!" << endl;
    }

    return 0;
}