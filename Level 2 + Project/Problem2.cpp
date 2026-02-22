#include<iostream>
using namespace std ; 
enum enPrime{Prime = 1 , NotPrime = 2} ; 

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

enPrime checkNumberPrimeOrNot(int Number)
{
    int M = round(Number / 2 ) ; 
    for ( int i = 2 ; i <= M ; i++ )
    {
        if ( Number % i == 0)
        return enPrime::NotPrime ; 
    }
    return enPrime::Prime ; 
}
void PrintResults(int Number)
{
    for ( int i = 1 ; i <= Number ; i++ )
    {
        if (checkNumberPrimeOrNot(i) == enPrime::Prime)
            cout << i <<"\t" ; 

    }
}

int main()
{
    PrintResults(ReadNumberPositive()) ;
    
    return 0 ; 
}