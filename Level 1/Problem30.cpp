#include<iostream>
using namespace std ; 


int ReadNumber(string message)
{
    int Number ; 
    do
    {
        cout << message ; 
        cin >>Number ; 
    }while(Number < 0 ) ; 
    

    return Number ; 
}

int FactoriaNumber(int Number)
{
    int Factorial = 1 ;
    for ( int i = Number ; i >=1 ; i-- )
    {
        Factorial = Factorial * i ; 
    }
    return Factorial ; 
}

void PrintResults(int Factorial)
{
    cout <<"The Factorial is : "<< Factorial ; 
}

int main()
{
    PrintResults(FactoriaNumber(ReadNumber("Enter A Positive Number : "))) ; 

    return 0 ; 
}