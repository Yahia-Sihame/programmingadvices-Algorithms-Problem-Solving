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

void PrintResult(int Counter  )
{
    cout << "Digit Frequency is " << Counter <<" Time(s)" ; 
}

int main ()
{
    PrintResult(DigitFrequency(ReadNumberPositive(),ReadNumberPositive())) ; 

    return 0 ; 
}