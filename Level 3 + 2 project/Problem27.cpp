#include<iostream>
using namespace std ; 

char ReadChar()
{
    char c ;
    cout << "Please Enter a char : " ; 
    cin >> c ;
    return c ; 
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
int main()
{
    char c = ReadChar() ; 
    cout << "Char after inverting base :" << endl << ConvertChar(c) ; 
}