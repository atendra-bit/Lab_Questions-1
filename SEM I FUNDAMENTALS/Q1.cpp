// Write a program using C++ to compute the sum of the first n terms of the following series:
// S=1-2+3-4+...+n
// The number of terms n is to be taken from the user.

// Code :

#include <iostream>
using namespace std;
int main()
{
    st:
    
    cout << "Input number for the series :- ";
    int num;
    cin >> num;
    
    if(num <= -1)
    {
        cout << "Invalid Input" << endl;
        goto st;
    }
    
    int sum = 1;
    
    for(int i = 2; i-1<=num;i++)
    {
        sum = sum + (i*2*(i%2)) - i;
    }
}

cout << "Result :- " << sum << endl;