#include<iostream>
using namespace std ; 


string EnterString()
{
    string str ; 
    cout << "Please Enter your string : " ; 
    getline(cin,str) ; 
    return str ; 
}
int CountLength(string str)
{
    int i = 0 ; 
    while ( str[i] )
        i++ ; 
    return i ; 
}

int CountCapitalLeters(string str)
{
    int i = 0 ; 
    int count = 0 ; 
    while ( str[i])
    {
        if (isupper(str[i]))
            count++ ; 
        i++ ; 
    }
    return count ; 
}

int CountSmallLeters(string str)
{
    int i = 0 ; 
    int count = 0 ; 
    while ( str[i])
    {
        if (islower(str[i]))
            count++ ; 
        i++ ; 
    }
    return count ; 
}

// char ConvertChar(char c)
// {
//     if ( c >= 'A' && c <= 'Z')
//         c = (char)(c + 32) ; 
//     else if (  c >= 'a' && c <= 'z' )
//         c = (char)(c - 32) ;
//     return c ; 
// }



int main()
{
    string str = EnterString() ; 
    cout << "String length = " << CountLength(str) << endl ;
    cout << "Capital Leters = " << CountCapitalLeters(str) << endl ;
    cout << "Small Leters = " << CountSmallLeters(str) << endl ;

}