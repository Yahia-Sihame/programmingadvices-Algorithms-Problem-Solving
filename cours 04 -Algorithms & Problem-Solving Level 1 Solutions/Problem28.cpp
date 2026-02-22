#include<iostream>
using namespace std ; 

enum enOddOrEven {Odd = 1 , Even = 2 } ; 

int ReadNumber()
{
    int Number ; 
    cout << "Enter Number : " ; 
    cin >>Number ; 

    return Number ; 
}

enOddOrEven ChechNumberOddOrEven(int Number)
{
    if ( Number % 2 == 0 )
        return enOddOrEven::Even ; 
    return enOddOrEven::Odd ; 
}

int SumNumberUseFor(int Number)
{
    int Sum = 0 ; 
    for ( int i = 1 ; i <= Number ; i++)
    {
        if (ChechNumberOddOrEven(i) == Odd)
            Sum += i ;  
    }

    return Sum ; 
}
int SumNumberUseWhile(int Number)
{
    int Sum = 0 ; 
    int i = 1 ; 
    while ( i <= Number )
    {
        if (ChechNumberOddOrEven(i) == Odd)
            Sum += i ; 
        i++ ; 
    }

    return Sum ; 
}
int SumNumberUseDowhile(int Number)
{
    int Sum = 0 ; 
    int i = 1 ;
    do
    {
        if (ChechNumberOddOrEven(i) == Odd)
            Sum += i ; 
        i++ ; 
    }while( i <= Number ) ; 

    return Sum ; 
}

void PrintResult(int Sum)
{
    cout << "The sum Odd  Numbers is " << Sum ; 
}

int main()
{
    PrintResult(SumNumberUseFor(ReadNumber())) ; 

    return 0 ;
}