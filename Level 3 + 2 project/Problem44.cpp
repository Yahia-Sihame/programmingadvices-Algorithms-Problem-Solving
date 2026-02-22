#include<iostream>
using namespace std ; 


string ReadString()
{
    string str ; 
    cout << "Please Enter your string : " ; 
    getline(cin,str) ; 
    return str ; 
}
bool IsPunctuation(char Char)
{
    if ((Char >= 33 && Char <= 47) || (Char >= 58 && Char <= 64) || (Char >= 91 && Char <= 96) ||
        (Char >= 123 && Char <= 126))
        return true;
    else
        return false;
}
string RemovePunctuation(string str)
{
    int i = 0 ; 
    string s1 = " " ; 
    while ( str [i])
    {
        if ( !IsPunctuation(str[i]) )
        {
            s1 = s1 + str[i] ; 
        }
        i++ ; 
    }
    return s1 ; 
}

int main()
{
    string str = "afin : aba , yahya- hanya ! kolchi ,. mzyaan" ; 
    cout << "With Punctuation : " << str << endl; 
    cout << "with out : " << RemovePunctuation(str) ; 
}