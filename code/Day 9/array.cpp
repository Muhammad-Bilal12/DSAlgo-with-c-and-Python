#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl
         << "Print is done " << endl;
}

int main()
{

    // Arrays

    int first[15]; // array declaration

    // Print the value of array

    cout << "The value of 1 index is " << first[1] << " "; // it show the garbage value because the value is not defined
    cout << endl;
    // Initialized the array

    int second[3] = {4, 5, 7};

    // lets print all values;
    // cout << "The value of 0 index is " << second[0] << " ";
    // cout << "The value of 1 index is " << second[1] << " ";
    // cout << "The value of 2 index is " << second[2] << " ";

    // printArray(second, 3);

    // cout << endl;

    // now, how we can define 2 to 3 values in 15 size of array?
    int third[15] = {4, 5}; // define only 2 values
    // access 1 value
    // cout << "The value of 0 index is " << third[1] << " ";
    // now print all values
    // ok, using loop you can print all the values
    // cout << endl;
    // int size = 15;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << third[i] << " ";
    // }
    // cout << endl
    //      << "Print is done " << endl;

    // printArray(third, 15);

    //  Sir, ap ne ek baat boli thi k ap loop ki sb value ko 0 se define kr skte he
    int fourth[10] = {0};
    // printArray(fourth, 10);
    // cout << endl;
    // size = 10;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << fourth[i] << " ";
    // }
    // cout << endl
    //      << "Print is done " << endl;

    // Differnt types of arrays

    // char ch[5] = {'a', 'b', 'c', 'r', 'e'};
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << ch[i] << " ";
    // }















    cout << endl
         << " Everything is fine ! " << endl;
    return 0;
}
