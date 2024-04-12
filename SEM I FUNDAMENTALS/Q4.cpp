// Write a menu driven program to perform the following operations on an array:

// a) Find the minimum, maximum and average of the array elements

// b) Search an element in the array using linear and binary search

// c) Display the address of every element of the array


// Code :


#include <iostream>
using namespace std;
int main() 
{
    int arry[5] = {2,4,6,8,10};
    cout << "Select Array Operation - " << endl;
    cout << "1. min, max & avg of array elements" << endl;
    cout << "2. Search element in array using linear and binary search" <<endl;
    cout << "3. Display address of each element in array" << endl;
    cout << "\nInput :- ";

    int operation;
    cin>>operation;
    
    if(operation < 0 || operation > 3)
    {
        cout << "invalid input" << endl;
    }
    
    if(operation == 1)
    {
        int min = arry[0];
        int max = arry[0];
        int avg = arry[0];
    
        for(int i = 1; i<(sizeof(arry)/4);i++)
        {
    
            if(arry[i] < min)
        {
            min = arry[i];
        }
    
        if(arry[i] > max)
        {
            max = arry[i];
        }
        
        avg += arry[i];
        }

        cout << "\n Array Max = " << max << " | Array Min = " << min << " | Array Avg = " << avg/(sizeof(arry)/4) << endl;
    
    }
    
    
    else if(operation == 2)
        {
            cout << "\n\nEnter Number To Search For:- ";
            int num;
            bool found = false;
            cin>>num;
        
            for(int i = 0; i<(sizeof(arry)/4);i++)
            {
                if(num == arry[i])
                {
                    cout << "Element " << num << " found in array at index " << i << endl;
                    found = true;
                }
            }
            
            if(!found)
            {
                cout << "Element " << num << " not found in array" << endl;
            }
        }
        
        else
        {
            cout << "\n\nAddress of each element :- " << endl;
            for(int i = 0; i<(sizeof(arry)/4);i++){
            cout << arry[i] << " => " << i << endl;
        }
    
}