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

void InvertedNumberPattern(int Number )
{
    int j = 1 ; 
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
    InvertedNumberPattern(ReadNumberPositive()) ; 

    return 0 ; 
}