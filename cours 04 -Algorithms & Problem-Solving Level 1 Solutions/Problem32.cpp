#include<iostream>
using namespace std ; 

void ReadNumber(int &Number , int &M)
{ 
    cout << "Enter Number : " ; 
    cin >> Number ; 
    cout << "Enter the power :" ;
    cin >> M ; 
}

int PowerOfNumber(int Number , int M)
{
    if ( M == 1 )    return 1 ; 
    int Power = 1 ; 
    for ( int i = 0 ; i < M ; i++)
    {
        Power = Power * Number ; 
    }

    return Power ; 
}

void PrintResult(int Power)
{
    cout << "The result is : "<< Power ; 
}


int main()
{
    int Number , M ; 
    ReadNumber(Number,M) ; 
    PrintResult(PowerOfNumber(Number,M)) ; 

    return 0 ; 
}