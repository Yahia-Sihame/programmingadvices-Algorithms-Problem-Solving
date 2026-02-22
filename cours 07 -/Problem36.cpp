#include<iostream>
using namespace std ; 


string ReadString()
{
    string str ; 
    cout << "Please Enter your string : " ; 
    getline(cin,str) ; 
    return str ; 
}

char ReadChar()
{
    char c ;
    cout << "Please Enter a char : " ; 
    cin >> c ;
    return c ; 
}

int CountWords(string str)
{
    int i = 0 ;
    int test = 0; 
    int count = 0 ; 
    while ( str[i] )
    {
        if ( str[i] == ' ' )
            test = 0 ; 
        if ( test == 0 && str[i] != ' ' )
        {
            test = 1 ;
            count++ ; 
        }
        i++ ; 
    }
    return count ; 
}

int main()
{
    string str = ReadString() ; 
    cout << "The number of words in your string is : " << CountWords(str) ; 
     
}