#include <iostream>
using namespace std;

int main()
{

    // boolean -- two value true or false

    bool isCodingFun = true;
    bool isFishTasty = false;
    // cout << isCodingFun << endl; // Outputs 1 (true)
    // cout << isFishTasty << endl; // Outputs 0 (false)

    // From the example above, you can read that a true value returns 1, and false returns 0

// Voting system app

int myAge;
cout<<"Enter Your age: ";
cin>>myAge;
int votingAge = 18;

// cout << (myAge >= votingAge); // returns 1 (true), meaning 25 year olds are allowed to vote!


if(myAge >= 18 ){
    cout<< "You are allow for vote";
}else{
    cout<< "You are not allow for vote";

}

    return 0;
}