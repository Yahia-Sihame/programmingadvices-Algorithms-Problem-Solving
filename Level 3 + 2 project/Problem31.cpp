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

int CountLeterInString(string str , char c)
{
    int i = 0 ; 
    int count = 0 ;
    while ( str[i])
    {
        if ( c == str[i])
            count++ ;
        i++ ; 
    }
    return count ; 
}
int CountLeterInStringMatchCase(string str , char c)
{
    int i = 0 ; 
    int count = 0 ;
    while ( str[i])
    {
        if ( tolower(c) == str[i] || toupper(c) == str[i])
            count++ ;
        i++ ; 
    }
    return count ; 
}

int main()
{
    string str = ReadString() ; 
    char c = ReadChar() ;
    
    cout << "Letter '" << c << "' Count = " << CountLeterInString(str,c) << endl ; 
    cout << "Letter '" << (char)tolower(c)  << "' "<< "or '" << (char)toupper(c) << "' Count = " << CountLeterInStringMatchCase(str,c) ; 

}