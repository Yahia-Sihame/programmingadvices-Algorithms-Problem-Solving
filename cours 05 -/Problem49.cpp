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

int MyCiel( float Number )
{   
    if ( Number != (int)Number )
    {
        if ( Number > 0 )
            return (int)Number + 1 ; 
        else 
            return Number ; 
    }
    return Number ; 
}
int main()
{
    float Number = ReadNumber("Enter Number : ") ;
    cout << "My Ciel Result is : "<< MyCiel(Number) << endl ;
    cout << "C++ Ciel result is : " << ceil(Number) ; 

    return 0 ; 
}