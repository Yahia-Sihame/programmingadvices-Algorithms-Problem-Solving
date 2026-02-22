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
    for ( int i = 0 ; i <= Number ; i++ )
    {
        cout << i << "  " ;
    }
}
void PrintResultsByWhile(int Number)
{
    int i = 0 ; 
    while ( i <= Number )
    {
        cout << i << "  " ;
        i++ ; 
    }
}
void PrintResultsByDoWhile(int Number)
{
    int i = 0 ; 
    do 
    {
        cout << i << "  " ;
        i++ ; 
    }while(i<=Number) ;
}


int main ()
{
    PrintResultsByDoWhile(ReadNumber()) ; 

    return 0 ; 
}