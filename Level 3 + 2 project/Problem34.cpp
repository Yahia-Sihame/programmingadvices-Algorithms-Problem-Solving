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

bool IsVowel(char c)
{
    return (( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')); 
}

void PrintVowels(string str)
{
    int i = 0 ; 
    while ( str[i] )
    {
        if (IsVowel(str[i]))
            cout << str[i] << "     " ;
        i++ ; 
    }
}

int main()
{
    string str = ReadString() ; 
    cout << "Vowel in string are : " ; 
    PrintVowels(str) ; 
}