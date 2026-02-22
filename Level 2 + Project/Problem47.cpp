#include<iostream>
#include<math.h>
using namespace std ; 

float  ReadNumber(string Message )
{
    float Number ; 
    
    cout << Message ; 
    cin >> Number ; 
    

    return Number ; 
}

float GetFractionPart(float Number)
{
    return Number - (int)Number ; 
}

int MyRound(float Number )
{
    int IntPart = (int)Number ; 

    if ( abs(GetFractionPart(Number)) >= .5)
    {
        if ( IntPart >= 0 )
            return ++IntPart + 1 ;
        else 
            return IntPart - 1 ;
    }
    else 
        return IntPart ; 
     
}

int main()
{
    float Number = ReadNumber("Enter Number : ") ;
    cout << "My Round Result is : "<< MyRound(Number) << endl ;
    cout << "C++ Round result is : " << round(Number) ; 

    return 0 ; 
}