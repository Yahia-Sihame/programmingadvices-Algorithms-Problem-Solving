#include<iostream>
using namespace std ; 


void PrintFibunatchi(int Number)
{
    int i = 1 ; 
    int prev1 = 1 ; 
    int prev2 = 0 ; 
    int sum = 0 ;
    cout << "1 " ; 
    while ( i < Number )
    {
        sum = prev1 + prev2 ; 
        cout << sum << " " ; 
        prev2 = prev1 ;
        prev1 = sum ;
        i++ ; 
    }
}


int main()
{
    PrintFibunatchi(10) ; 
}