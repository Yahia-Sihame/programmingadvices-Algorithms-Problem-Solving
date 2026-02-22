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

bool ReverseNumber(int Number )
{
    int Remainder = 0 ; 
    int Number2 = 0 ; 
    while ( Number > 0 )
    {
        Remainder = Number % 10 ; 
        Number = Number / 10 ; 
        Number2 = Number2 * 10 + Remainder ; 
    }

    return Number2  ; 
}

void PrintResult(int Number )
{
    if ( Number == ReverseNumber(Number) )
        cout << "Yes, is a Palindrome Number ." ;
    else 
        cout << "No, is Not a Palindrome Number ." ;   
}

int main()
{

    PrintResult(ReverseNumber(ReadNumberPositive())) ; 
    
    return 0 ; 
}
