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

bool isPerfectNumber(int Number)
{
    int M = round( Number / 2 ) ; 
    int Sum = 0 ; 
    for ( int i = 1 ; i <= M ; i++ )
    {
        if ( Number % i == 0 )
            Sum += i ;  
    } 
    return Sum == Number ; 
}

void PrintResult(int Number)
{
    if ( isPerfectNumber(Number))
        cout << "This Number is Perfect ." ; 
    else 
        cout << "This Number is Not Pecrfect . " ; 
}

int main ()
{
    PrintResult(ReadNumberPositive()) ; 

    return 0 ; 
}
