Write a menu driven program to perform the following operations on a string:

a) Calculate length of the string (use pointers)

b) Check whether the first character of every word in the string is in uppercase or not

c) Reverse the string

d) Display the address of every character in the string


Code :


#include <iostream>
#include <string>
using namespace std;
int main() 
{
    std::string str = "Hello there My name is Dev";
    cout << "Select Array Operation - " << endl;
    cout << "1. Get length of the sting." << endl;
    cout << "2. checking if first character of every word in string is capital or not." << endl;
    cout << "3. Reversing the string" << endl;
    cout << "4. Displaying adress of every charactor in the string." << endl;
    cout << "\nInput :- ";
    
    int operation;
    cin>>operation;
    cout << "\n\n";
    
    if(operation < 0 || operation > 4)
    {
        cout << "invalid input" << endl;
    }
    
    if(operation == 1)
    {
    
        char * ptr = &str[0];
        int lenght = 0;
    
        while(*ptr != '\0')
        {
            ptr++;
            lenght++;
        }
        cout << "Length of string using pointors = " << lenght << endl;
    }

else if(operation == 2)
{
    bool islast = false;
    if(int(str[1]) >= 65 && int(str[1]) <= 90)
    {
        islast = true;
    }
    
    else
    {
        islast = false;
    }
    
    for(int i = 0; i<str.length();i++)
    {
        if(str[i] == ' ')
        {
            if(islast)
            {
                cout << " - Yes " << endl;
            }
        
        else
        {
            cout << " - No " << endl;
        }
        
        if(int(str[i+1]) >= 65 && int(str[i+1]) <= 90)
        {
            islast = true;
        }
        
        else
        {
            islast = false;
        }
    }

    else
    {
        cout << str[i];
    }

    if(islast)
    {
        cout << " - Yes " << endl;
    }

    else
    {
        cout << " - No " << endl;
    }
}
}

else if(operation == 3)
{
    string temp;
    for(int i = str.length() - 1;i>=0;i--)
    {
        temp += str[i];
    }
    
    str = temp;
    cout << "Reversed String :- " << str << endl;
}

else
{
    char* ptr = &str[0];
    while(*ptr != '\0')
    {
        cout << *ptr << " => " << (void*)&(*ptr) << endl;
        ptr++;
    }
}

}
