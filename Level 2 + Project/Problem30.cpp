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
        Array[i] = i+1 ; 
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

void Swap(int &A , int &B)
{
    int Temp = A ; 
    A = B ; 
    B = Temp ; 
}

void ChuffleArray(int Array[100], int ArrayLength)
{
    for ( int i = 0 ; i < ArrayLength ; i++ )
    {
        Swap(Array[RandomNumber(1,ArrayLength) - 1 ] , Array[RandomNumber(1,ArrayLength) - 1 ]) ; 
    }
}

int main ()
{
    srand((unsigned)time(NULL) ); 
    int Array[100] ; 
    int ArrayLength ; 
    ReadRandomArray(Array , ArrayLength) ;
    cout << "Befor : " ; 
    PrintArray(Array , ArrayLength) ; 

    ChuffleArray(Array,ArrayLength) ; 
    cout << "After : " ; 
    PrintArray(Array,ArrayLength) ; 

    return 0 ; 
}