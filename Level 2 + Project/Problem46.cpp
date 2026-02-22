#include<iostream>
#include<math.h>
using namespace std ; 

int ReadNumber(string Message )
{
    int Number ; 
    
    cout << Message ; 
    cin >> Number ; 
    

    return Number ; 
}

int Myabs(int Number )
{
    if ( Number < 0)
        return Number * -1 ;
    return Number ;  
}

int main()
{
    int Number = ReadNumber("Enter Number : ") ;
    cout << "My Abs Result is : "<< Myabs(Number) << endl ;
    cout << "C++ Abs result is : " << abs(Number) ; 

    return 0 ; 
}