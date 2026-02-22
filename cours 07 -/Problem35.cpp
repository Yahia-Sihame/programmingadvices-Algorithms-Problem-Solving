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

void PrintEachWord(string str)
{
    int i = 0 ; 
    while ( str[i] )
    {
        while ( str[i] == ' ' && str[i])
            i++ ; 
        while ( str[i] != ' ' && str[i])
        {
            cout << str[i] ;
            if ( str[i+1] == ' ' )
                cout << endl ;
            i++ ; 
        }
        i++ ; 
    }
}

int main()
{
    string str = ReadString() ; 
    cout << "Your string words are : " << endl ;
    PrintEachWord(str) ;  
}