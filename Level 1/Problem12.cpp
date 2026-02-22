#include<iostream>
using namespace std ; 


void ReadNumbers(int &Number1 , int &Number2)
{
    cout<< "Enter your first number : " ; 
    cin >> Number1 ; 
    cout<< "Enter your secend number : " ; 
    cin >> Number2 ; 
}
int ReturnMaxOfNumbers(int Number1 , int Number2) 
{
     
    if ( Number1 < Number2 )
        return Number2 ; 
    return Number1 ; 
}
void PrintResults(int Number1 , int Number2)
{
    cout << "The max value is : " << ReturnMaxOfNumbers(Number1 , Number2) ; 

}
int main()
{
    int Number1 , Number2 ; 
    ReadNumbers(Number1 , Number2) ; 
    PrintResults(Number1 , Number2) ; 

    return 0 ; 
}