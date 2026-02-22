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
void FillArray(int Array[100] , int &ArrayLength)
{
    ArrayLength = 6 ; 
    Array[0] = 10;
    Array[1] = 20;
    Array[2] = 30;
    Array[3] = 30;
    Array[4] = 20;
    Array[5] = 10;
}
void AddElementnArray(int Array[100] , int &ArrayLength , int Number)
{
    ArrayLength++ ; 
    Array[ArrayLength-1] = Number ; 
}

bool CheckPalindromArray(int Array[100] , int ArrayLength )
{
    for ( int i = 0  , j = ArrayLength - 1 ; i < j ; i++ , j--)
    {
        if ( Array[i] != Array[j])
            return false ; 
    }
    return true ; 
}

void PrintArray(int Array[100] , int ArrayLength)
{
    for ( int i = 0 ; i < ArrayLength ; i++ )
    {
        cout << "Array[" << i+1 << "] : " <<  Array[i] << endl  ;
    }
}

void PrintResult(int Array[100] , int ArrayLength)
{
    cout << "The Numbers of Array 1 : " << endl  ; 
    PrintArray(Array,ArrayLength) ; 
    if ( CheckPalindromArray(Array,ArrayLength) == true )
        cout << "yes Array is Palindrome : " ; 
    else 
        cout << "No Array Is Not Palindrome : " ; 
}

int main( )
{
        srand((unsigned)time(NULL) ); 

    int Array1[100] , ArrayLength = 0  ; 
    FillArray(Array1,ArrayLength) ; 


    PrintResult(Array1,ArrayLength) ; 

    return 0 ; 

}