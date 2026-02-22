#include<iostream>
using namespace std ; 

int ReadNumberPositive()
{
    int Number ; 
    do
    {
        cout << "Enter Number Positive : " ; 
        cin >> Number ; 
    }while ( Number < 0) ; 

    return Number ; 
}

void InvertedLetterPattern(int Number )
{
    char j = 65  ; 
    while ( Number > 0 )
    {  
        for ( int i = 1  ; i <= Number  ; i++ )
            cout << j ; 
        cout << endl ;
        Number-- ; 
        j++ ;
    }
}

int main()
{
    InvertedLetterPattern(ReadNumberPositive()) ; 

    return 0 ; 
}