#include<iostream>

using namespace std ; 

int ReadNumber(string Message )
{
    int Number ; 
    do
    {
        cout << Message ; 
        cin >> Number ; 
    }while ( Number < 0) ; 

    return Number ; 
}

void AddElementnArray(int Array[100] , int &ArrayLength , int Number)
{
    ArrayLength++ ; 
    Array[ArrayLength-1] = Number ; 
}
void ReadNumbersInArray(int Array[100] , int &ArrayLength )
{
    ArrayLength = 0 ; 
    int Check = 0 ; 
    do 
    {
        AddElementnArray(Array,ArrayLength,ReadNumber("Enter Number Please : ")) ; 
        cout << "Do You Want To Add Number ? [1]:Yes , [0]:No : " ; 
        cin >> Check ; 
    }while(Check == 1 ) ; 
}

void PrintArray(int Array[100], int ArrayLength)
{
    for ( int i = 0 ; i < ArrayLength ; i++ )
    {
        cout << Array[i] << " " ; 
    }
    cout << endl ; 
}

void PrintResult(int Array[100], int ArrayLength)
{
    cout << "Array Length : " << ArrayLength << endl ;
    cout << "Array Elements : " ;
    PrintArray(Array,ArrayLength) ;
}

int main ()
{
    srand((unsigned)time(NULL) ); 

    int Array[100] , ArrayLength ; 
    ReadNumbersInArray(Array,ArrayLength) ;
    
    PrintResult(Array,ArrayLength) ; 

    return 0 ; 
}