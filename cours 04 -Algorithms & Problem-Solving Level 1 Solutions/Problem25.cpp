#include<iostream>
using namespace std ; 


int ReadNumber()
{
    int Number ; 
    do 
    {
        cout << "Enter Number betwen 18 and 50 : " ; 
        cin >> Number ; 
    } while (Number<18 || Number>50) ;

    return Number ; 
}

void PrintResults(int Number)
{
    cout << "The number is valide " ; 
}

int main ()
{
    PrintResults(ReadNumber()) ; 

    return 0 ; 
}