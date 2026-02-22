#include<iostream>
using namespace std ; 


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
        Array[i] = RandomNumber(10,99) ; 
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

void SumTwoArrays(int Array1[100] , int Array2[100] , int Array3[100] , int ArrayLength)
{
    for ( int i = 0 ; i < ArrayLength ; i++ )
        Array3[i] = Array1[i] + Array2[i] ; 

}

int main()
{
    srand((unsigned)time(NULL) ); 

    int Array1[100] , Array2[100] , Array3[100] ; 
    int ArrayLength1 , ArrayLength2; 
    ReadRandomArray(Array1,ArrayLength1) ; 

    ReadRandomArray(Array2,ArrayLength2) ; 

    cout << "Array 1 : " ; 
    PrintArray(Array1,ArrayLength1) ; 


    cout << "Array 2 : " ; 
    PrintArray(Array2,ArrayLength2) ; 

    SumTwoArrays(Array1,Array2,Array3,ArrayLength1) ; 

    cout << "Array 3 : " ; 
    PrintArray(Array3,ArrayLength2) ; 

    

    return 0 ; 
}