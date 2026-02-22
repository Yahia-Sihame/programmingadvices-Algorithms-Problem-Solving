#include<iostream>
#include<math.h>
using namespace std ; 

float ReadNumber(string Message )
{
    float Number ; 
    
    cout << Message ; 
    cin >> Number ; 
    

    return Number ; 
}

int MySqrt( float Number )
{
    return pow(Number,0.5) ; 
} 

int main()
{
    float Number = ReadNumber("Enter Number : ") ;
    cout << "My Sqrt Result is : "<< MySqrt(Number) << endl ;
    cout << "C++ Sqrt result is : " << sqrt(Number) ; 

    return 0 ; 
}