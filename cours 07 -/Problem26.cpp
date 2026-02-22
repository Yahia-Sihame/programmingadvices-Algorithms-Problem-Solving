#include<iostream>
using namespace std ; 


string EnterString()
{
    string str ; 
    cout << "Please Enter your string : " ; 
    getline(cin,str) ; 
    return str ; 
}


string StringToUpercase(string str)
{
    int i = 0 ; 
    int test = 0 ;
    while ( str[i] )
    {
        if ( str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = (char)(str[i] - 32) ; 
        }
        i++ ; 
    }
    return str ;
}

string StringToLowercase(string str)
{
    int i = 0 ; 
    int test = 0 ;
    while ( str[i] )
    {
        if ( str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = (char)(str[i] + 32) ; 
        }
        i++ ; 
    }
    return str ; 
}

int main()
{ 
    string str = EnterString() ; 
    cout << "String after Upper : " << endl ; 
    cout << StringToUpercase(str) << endl  ; 
    cout << "String after Lower : " << endl ; 
    cout << StringToLowercase(str) << endl ; 

}