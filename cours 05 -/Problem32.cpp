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

void PrintArray(int Array[100], int ArrayLength)
{
    for ( int i = 0 ; i < ArrayLength ; i++ )
    {
        cout << Array[i] << " " ; 
    }
    cout << endl ; 
}

void CopyReverseArray(int Array1[100] , int Array2[100] , int ArrayLength)
{
    for ( int i = 0 , j = ArrayLength - 1 ; i < ArrayLength ; i++ , j--)
    {
        Array2[i] = Array1[j] ; 
    }
}

int main ()
{
    srand((unsigned)time(NULL) ); 
    int Array1[100] , Array2[100] ; 
    int ArrayLength ; 
    ReadRandomArray(Array1 , ArrayLength) ;
    
    cout << "Array 1 :" ;
    PrintArray(Array1, ArrayLength) ; 
    CopyReverseArray(Array1,Array2,ArrayLength) ; 
    cout << "Array 2 :" ; 
    PrintArray(Array2 , ArrayLength) ; 

    return 0 ; 
}