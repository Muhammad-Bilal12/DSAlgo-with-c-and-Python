#include<iostream>
using namespace std;

int main(){


    int a =5;
    int b = a+1;

    if ((a=5)==b)
    {

        // a is assigned 3, Now a == b is 3 which is true;
        cout<<a;

    }else{
        cout<<a+1;
    }
    
    return 0;
}