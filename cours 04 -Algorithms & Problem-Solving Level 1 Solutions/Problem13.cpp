#include<iostream>
using namespace std ; 


void ReadNumbers(int &Number1 , int &Number2 , int &Number3)
{
    cout<< "Enter your first number : " ; 
    cin >> Number1 ; 
    cout<< "Enter your second number : " ; 
    cin >> Number2 ; 
    cout<< "Enter your third number : " ; 
    cin >> Number3 ; 
}
int ReturnMaxOfNumbers(int Number1 , int Number2 , int Number3) 
{
    if ( Number1 > Number2 )
    {
        if(Number2 > Number3)
            return Number1 ; 
        else
            return  Number3 ; 
    }
    else if ( Number2 > Number3 )
    {
        return Number2 ; 
    }
    else 
        return Number3 ; 
}
void PrintResults(int Number1 , int Number2 , int Number3 )
{
    cout << "The max value is : " << ReturnMaxOfNumbers(Number1 , Number2 , Number3) ; 

}
int main()
{
    int Number1 , Number2 , Number3; 
    ReadNumbers(Number1 , Number2 , Number3) ; 
    PrintResults(Number1 , Number2 , Number3) ; 

    return 0 ; 
}