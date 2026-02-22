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
int MyFloor( float Number )
{
    if ( Number < 0 )
    {
        if ( (int)Number != Number )
            return (Number - 1) ; 
        else 
            return Number ; 
    }
    return (int)Number  ; 
}
int main()
{
    float Number = ReadNumber("Enter Number : ") ;
    cout << "My Floor Result is : "<< MyFloor(Number) << endl ;
    cout << "C++ Floor result is : " << floor(Number) ; 

    return 0 ; 
}