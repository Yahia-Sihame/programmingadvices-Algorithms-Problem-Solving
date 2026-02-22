#include<iostream>
using namespace std ; 


char ReadChar()
{
    char c ;
    cout << "Please Enter a char : " ; 
    cin >> c ;
    return c ; 
}


bool IsVowel(char c)
{
    return (( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')); 
}


int main()
{
    char c = ReadChar() ; 
    (IsVowel(c)) ? cout << "YES Letter '" << c <<"' is Vowel" : cout << "NO Letter '" << c <<"' is Not Vowel" ;
}