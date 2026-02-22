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
void printResult(int Number)
{
    int Remainder = 0 ; 
    while ( Number > 0 )
    {
        Remainder = Number % 10 ; 
        Number = Number / 10 ;
        cout << Remainder << endl ; 
    }
}


int main()
{

    printResult(ReadNumberPositive()) ; 
    
    return 0 ; 
}
