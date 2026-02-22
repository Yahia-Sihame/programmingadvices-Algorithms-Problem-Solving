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
        Array[i] = RandomNumber(-100,100) ; 
    }
}

void SumElementsArray(int Array[100] , int &ArrayLength , int &Count)
{
    
    for ( int i = 0 ; i < ArrayLength ; i++ )
    {
        if ( Array[i] >= 0 )
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

    cout << "The Positive Numbers Count Is : " << Count ;


    return 0 ; 
}