#include<iostream>
using namespace std ; 

int ReadNumber()
{
    int Number = 0 ; 
    int sum = 0 ;
    int i = 1 ;
    do
    {
        sum += Number ; 
        cout << "Enter Number " << i << " : " ; 
        cin >> Number ;
        i++ ; 
    } while ( Number != -99 ) ; 

    return sum ; 
}

void PrintResult(int Sum )
{
    cout << "Your Sum is : " << Sum ; 
}
int main()
{
    PrintResult(ReadNumber()) ; 

    return 0 ; 
}