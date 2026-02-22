#include<iostream>
using namespace std ; 

int ReadNumber()
{
    int Number ;
    cout << "Enter Number : " ; 
    cin >> Number ; 

    return Number ;
}

void PrintResultat(int Number)
{
    cout << Number*Number<<endl ;
    cout << Number*Number*Number<<endl ;
    cout << Number*Number*Number*Number ;
}

int main ()
{
    PrintResultat(ReadNumber()) ; 

    return 0 ; 
}