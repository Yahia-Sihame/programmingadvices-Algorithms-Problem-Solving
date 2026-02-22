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
int printResult(int Number)
{
    int Remainder = 0 ; 
    int Number2 = 0 ; 
    while ( Number > 0 )
    {
        Remainder = Number % 10 ; 
        Number = Number / 10 ;
        Number2 = Number2 * 10 + Remainder ; 
    } 
    return Number2 ; 
}

int main()
{
    cout << printResult(ReadNumberPositive()) ;  
    
    return 0 ; 
}
