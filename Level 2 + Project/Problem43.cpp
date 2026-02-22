#include<iostream>
using namespace std ; 

enum enOddOrEven{Odd = 1 , Even = 2 } ; 

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
int RandomNumber(int From , int To )
{

    int Random = rand() % (To - From + 1 ) + From ; 

    return Random ; 
}
void ReadRandomArray(int Array[100] , int &ArrayLength )
{
    cout << "Enter Array Length : " ; 
    cin >> ArrayLength ; 

    for ( int i = 0 ; i < ArrayLength ; i++ )
    {
        Array[i] = RandomNumber(1,100) ; 
    }
}

enOddOrEven CheckNumberOddOrEven(int Number)
{
    if ( Number % 2 == 0 )
        return enOddOrEven::Even ; 
    return enOddOrEven::Odd ; 
}

void SumElementsArray(int Array[100] , int &ArrayLength , int &Count)
{
    
    for ( int i = 0 ; i < ArrayLength ; i++ )
    {
        if ( CheckNumberOddOrEven(Array[i]) == enOddOrEven::Even )
            Count++ ; 
    } 

}


void PrintArray(int Array[100] , int ArrayLength)
{
    for ( int i = 0 ; i < ArrayLength ; i++ )
    {
        cout << "Array[" << i+1 << "] : " <<  Array[i] << endl  ;
    }
}

int main( )
{
    srand((unsigned)time(NULL) ); 

    int Array1[100] , ArrayLength = 0 ;
    int Count = 0 ;
    ReadRandomArray(Array1,ArrayLength) ; 


    cout << "The Number of Array 1 : " << endl  ; 
    PrintArray(Array1, ArrayLength) ; 
    SumElementsArray(Array1,ArrayLength,Count) ; 

    cout << "The Odd Numbers Count Is : " << Count ;


    return 0 ; 
}