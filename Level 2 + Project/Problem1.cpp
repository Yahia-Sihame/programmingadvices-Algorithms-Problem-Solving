#include<iostream>
using namespace std ; 



void PrintTableHead()
{
    int i = 0 ;
    cout << "\t\t\t\tMultiplication Table From 1 To 10\t\t\t"<< endl ; 
    for ( int i = 1 ; i <= 10 ; i++ )
    {
        cout << "\t" << i ; 
    }
    cout << "\n----------------------------------------------------------------------------------\n" ;
}

string ColumSeperator(int i)
{
    if ( i < 10 )
        return "    |" ; 
    else 
        return "   |" ;
}

void PrintMultiplicatinTable()
{
    PrintTableHead() ; 
    for ( int i = 1 ; i <= 10 ; i++)
    {
        cout << " " << i  << "\t"  ; 
        for ( int j = 1 ; j <= 10 ; j++ )
        {
            cout << i*j << "\t" ; 
        }
        cout << "\n" ; 
    }
}


int main()
{
    PrintMultiplicatinTable() ; 

    return 0 ;
}