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

void ReadArray(int Array[100] , int &ArrayLength)
{
    cout << "Enter Length of Array : " ; 
    cin >> ArrayLength ;

    for ( int i = 0 ; i < ArrayLength ; i++ )
    {
        cout << "Element["<<i+1 << "] : " ; 
        cin >> Array[i] ; 
    }
}
void PrintArray(int Array[100] , int ArrayLength)
{
    for ( int i = 0 ; i < ArrayLength ; i++ )
    {
        cout << Array[i] ; 
    }
    cout << endl ; 
}

int TimesRepeated(int Array[100] , int ArrayLength , int Number )
{
    int Count = 0 ; 
    for ( int i = 0 ; i < ArrayLength ; i++)
    {
        if ( Array[i] == Number )
            Count += 1 ; 
    }

    return Count ; 
}

int main()
{
    int Array[100] ;
    int ArrayLength ; 

    ReadArray(Array,ArrayLength) ; 
    PrintArray(Array,ArrayLength) ; 

    int Number = ReadNumber("Enter The Number : ") ;

    cout << TimesRepeated(Array,ArrayLength,Number) << " 5Time(s)" ; 

    return 0 ;
}