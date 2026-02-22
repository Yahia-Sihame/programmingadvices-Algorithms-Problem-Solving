#include<iostream>
using namespace std ; 

void ReadNumbers(int &Number1 , int &Number2 )
{
    cout<< "Enter your first number : " ; 
    cin >> Number1 ; 
    cout<< "Enter your second number : " ; 
    cin >> Number2 ; 
}

void SwapNumbers(int &Number1 , int &Number2 )
{
    int Temp ; 
    Temp = Number1 ; 
    Number1 = Number2 ; 
    Number2 = Temp ; 
}

void PrintResults(int Number1 , int Number2)
{
    cout << "The new value of Number1 is : " << Number1 <<endl ; 
    cout << "The new value of Number2 is : " << Number2 <<endl ;
}


int main()
{
    int Number1 , Number2 ; 
    ReadNumbers(Number1,Number2) ; 
    cout << "Befor swaping : \n" ;
    PrintResults(Number1,Number2) ; 
    cout << "After swaping : \n" ; 
    swap(Number1,Number2) ; 
    PrintResults(Number1,Number2) ; 

    return 0 ; 
}