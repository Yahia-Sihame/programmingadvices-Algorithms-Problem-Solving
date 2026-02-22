#include<iostream>
using namespace std ; 

char ReadChar()
{
    char c ;
    cout << "Please Enter a char : " ; 
    cin >> c ;
    return c ; 
}

string EnterString()
{
    string str ; 
    cout << "Please Enter your string : " ; 
    getline(cin,str) ; 
    return str ; 
}

// char ConvertChar(char c)
// {
//     if ( c >= 'A' && c <= 'Z')
//         c = (char)(c + 32) ; 
//     else if (  c >= 'a' && c <= 'z' )
//         c = (char)(c - 32) ;
//     return c ; 
// }

char ConvertChar(char c)
{
    return isupper(c) ? tolower(c) : toupper(c) ; 
}

string ConvertString(string str) 
{
    int i = 0 ; 
    while ( str[i] )
    {
        str[i] = ConvertChar(str[i]) ; 
        i++ ;
    }
    return str ;
}

int main()
{
    string str = EnterString() ; 
    cout << "string after inverting base :" << endl << ConvertString(str) ; 
}