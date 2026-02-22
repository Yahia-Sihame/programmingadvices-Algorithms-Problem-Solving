#include<iostream>
using namespace std ; 


string EnterString()
{
    string str ; 
    cout << "Please Enter your string : " ; 
    getline(cin,str) ; 
    return str ; 
}


void PrintFirstLeter(string str)
{
    int i = 0 ; 
    int test = 0 ;
    while ( str[i] )
    {
        if ( test == 0 && str[i] != ' ')
        {
            cout << str[i] << endl ; 
            test = 1 ;
        }
        else if (str[i] == ' ')
            test = 0 ; 
        i++ ; 
    }
}

int main()
{
    PrintFirstLeter(EnterString()) ; 
}