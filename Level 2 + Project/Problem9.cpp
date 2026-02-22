#include<iostream>
using namespace std ; 

int ReadNumberPositive(string Message)
{
    int Number ; 
    do
    {
        cout << Message ; 
        cin >> Number ; 
    }while ( Number < 0) ; 

    return Number ; 
}

int DigitFrequency(int Digit , int Number)
{
    int Remainder = 0 ; 
    int Counter = 0 ; 
    while ( Digit > 0 )
    {
        Remainder = Digit % 10 ; 
        Digit = Digit / 10 ; 
        if ( Remainder == Number )
            Counter++ ; 
    }
    return Counter ; 
}


void GetCountFrequency(int Digit)
{
    int Count = 0 ;
    for ( int i = 0 ; i < 10 ; i++ )
    {
        Count = DigitFrequency(Digit , i) ; 
        if ( Count > 0 )
            cout << "Digit " << i << " Frequency is : " << Count << endl ; 
    }
}

int main ()
{
    int Digit = ReadNumberPositive("Enter Number Positive : ") ; 

    GetCountFrequency(Digit) ;

    return 0 ; 
}