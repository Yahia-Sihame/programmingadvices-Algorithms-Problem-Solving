#include<iostream>
using namespace std ; 

enum enPrimeNotPrime{Prime = 1 , NotPrime = 2 } ; 

int ReadPositiveNumber()
{
    int Number ;
    do 
    {
        cout << "Enter a positive Number : " ; 
        cin >> Number ;
    } while ( Number < 0 ) ; 

    return Number ; 
}

enPrimeNotPrime CheckPrimeOrNot(int Number )
{
    for ( int i = 2 ; i <= Number/2 ; i++ )
    {
        if ( Number % i == 0 )
            return enPrimeNotPrime::NotPrime ; 
    }
    return enPrimeNotPrime::Prime ; 
}

void PrintResult(enPrimeNotPrime P)
{
    switch(P)
    {
        case enPrimeNotPrime::Prime :
            cout << "Is a Prime number . " ; 
            break ; 
        case enPrimeNotPrime::NotPrime : 
            cout << "Is not Prime number . " ; 
            break ; 
    }
}


int main()
{
    PrintResult(CheckPrimeOrNot(ReadPositiveNumber())) ; 

    return 0 ; 
}