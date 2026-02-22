#include<iostream>
using namespace std ; 

enum enNumberType{Odd = 1 , Even = 2} ;

int ReadNumber()
{
    int Number ; 
    cout << "Enter your number : " ; 
    cin >> Number ; 
    return Number ; 
}
enNumberType CheckNumberType( int Number)
{
    int Result = Number % 2 ; 
    if ( Result == 0 )
    {
        return enNumberType::Even ; 
    }
    else{
        return enNumberType::Odd ; 
    }
}
void PrintfNumberType(enNumberType Number)
{
    if ( Number == enNumberType::Even )
    {
        printf("Number is Even\n") ; 
    }
    else{
        printf("Number is Odd\n") ; 
    }
}

int main()
{
    PrintfNumberType(CheckNumberType(ReadNumber())) ; 

    return 0 ; 
}