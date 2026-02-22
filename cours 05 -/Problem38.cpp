#include<iostream>
using namespace std ; 

enum enOddOrEven{Odd = 1 , Even = 2} ; 

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
enOddOrEven CheckNumberOdOrNot(int Number)
{
    if ( Number % 2 == 0)
        return enOddOrEven::Even ; 
    return enOddOrEven::Odd ; 
}

void AddElementnArray(int Array[100] , int &ArrayLength , int Number)
{
    ArrayLength++ ; 
    Array[ArrayLength-1] = Number ; 
}

void CopyOddNumbersInArray(int Array1[100] , int Array2[100] ,int ArrayLength1 , int &ArrayLength2 )
{
    for (int i = 0 ; i < ArrayLength1 ; i++ )
    {
        if ( CheckNumberOdOrNot(Array1[i]) == enOddOrEven::Odd )
            AddElementnArray(Array2,ArrayLength2,Array1[i]) ; 
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

    int Array1[100] , Array2[100] , ArrayLength1 = 0 , ArrayLength2 = 0 ; 
    ReadRandomArray(Array1,ArrayLength1) ; 

    CopyOddNumbersInArray(Array1,Array2,ArrayLength1,ArrayLength2) ; 

    cout << "The Number of Array 1 : " << endl  ; 
    PrintArray(Array1, ArrayLength1) ; 
    cout << "The Number of Array 2 : " << endl ; 
    PrintArray(Array2, ArrayLength2) ; 

}