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
void SumOfDigits(int Number)
{
    int Remainder = 0 ; 
    int Sum = 0 ;
    while ( Number > 0 )
    {
        Remainder = Number % 10 ; 
        Number = Number / 10 ;
        Sum += Remainder ; 
    }
    cout << "The sum of Digits is : " << Sum ; 
}

int main()
{

    SumOfDigits(ReadNumberPositive()) ; 

    
    return 0 ; 
}