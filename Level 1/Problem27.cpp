#include<iostream>
using namespace std ; 


int ReadNumber()
{
    int Number ; 
    cout << "Enter Number : " ; 
    cin >>Number ; 

    return Number ; 
}

void PrintResultsByFor(int Number)
{
    for ( int i = Number ; i != 0  ; i-- )
    {
        cout << i << "  " ;
    }
}
void PrintResultsByWhile(int Number)
{
    int i = Number ; 
    while ( i != 0 )
    {
        cout << i << "  " ;
        i-- ; 
    }
}
void PrintResultsByDoWhile(int Number)
{
    int i = Number ; 
    do 
    {
        cout << i << "  " ;
        i-- ; 
    }while(i != 0) ;
}

int main ()
{
    PrintResultsByDoWhile(ReadNumber()) ; 

    return 0 ; 
}