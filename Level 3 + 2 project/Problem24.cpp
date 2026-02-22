#include<iostream>
using namespace std ; 


string EnterString()
{
    string str ; 
    cout << "Please Enter your string : " ; 
    getline(cin,str) ; 
    return str ; 
}


void PrintFirstLeterUppercase(string str)
{
    int i = 0 ; 
    int test = 0 ;
    while ( str[i] )
    {
        if ( test == 0 && str[i] != ' ' && (str[i] >= 'a' && str[i] <= 'z'))
        {
            cout << (char)(str[i] - 32) ; 
            test = 1 ;
        }
        else 
            cout << str[i];
        if (str[i] == ' ')
            test = 0 ; 
        i++ ; 
    }
}

int main()
{ 
    PrintFirstLeterUppercase(EnterString()) ; 
}