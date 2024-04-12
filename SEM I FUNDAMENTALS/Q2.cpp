// Write a program to display the following pattern:
// A
// BA
// CBA
// DCBA
// The number of rows n, is to be taken from the user.

// Code :

#include <iostream>
using namespace std;
int main()
{
st:
    cout << "Input number of rows :- ";
    int rows;
    cin >> rows;

    if(rows <= -1)
    {
    cout << "Invalid Input" << endl;
    goto st;
    }
    
    for(int i = 0; i<rows;i++)
    {
        for(int j = 0; j<=i;j++)
        {
            cout << char(65 - j + i);
        }
    cout << endl;
    }    
    
}