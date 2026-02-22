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
    ArrayLength = 10 ; 
    Array[0] = 10;
    Array[1] = 10;
    Array[2] = 10;
    Array[3] = 50;
    Array[4] = 50;
    Array[5] = 70;
    Array[6] = 70;
    Array[7] = 70;
    Array[8] = 70;
    Array[9] = 90;
}
int FindNumberInArray(int Array[100] , int ArrayLength , int Number)
{
    for ( int i = 0 ; i < ArrayLength ; i++ )
    {
        if ( Array[i] == Number )
            return i ; 
    }
    return -1 ; 
}
bool IsNumberExist(int Array[100] , int ArrayLength , int Number)
{
    return FindNumberInArray(Array,ArrayLength,Number) != -1 ; 
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
        if ( !IsNumberExist(Array2,ArrayLength1,Array1[i]) )
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
    FillArray(Array1,ArrayLength1) ; 

    CopyOddNumbersInArray(Array1,Array2,ArrayLength1,ArrayLength2) ; 

    cout << "The Number of Array 1 : " << endl  ; 
    PrintArray(Array1, ArrayLength1) ; 
    cout << "The Number of Array 2 : " << endl ; 
    PrintArray(Array2, ArrayLength2) ; 

}