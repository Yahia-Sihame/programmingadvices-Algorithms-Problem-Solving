#include<iostream>
using namespace std ; 

float ReadNumber()
{
    float Number ; 
    cout << "Enter your number : " ; 
    cin >> Number ; 

    return Number ; 
}

float HalfNUmber(float Number )
{
    float HalfNumber ; 
    HalfNumber = Number/2 ; 

    return HalfNumber ;
}

void PrintHalfNumber(float HalfNumber)
{
    cout << "The half of the Number is : " << HalfNumber ; 
}
int main()
{
    PrintHalfNumber(HalfNUmber(ReadNumber())) ; 

    return 0 ; 
}