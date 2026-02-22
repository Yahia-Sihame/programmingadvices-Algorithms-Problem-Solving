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

int MaxValue(int Array[100] , int ArrayLength  )
{
    int Max = Array[0] ; 
    for (int i = 1 ; i < ArrayLength ; i++ )
    {
        if (Max < Array[i])
            Max = Array[i] ; 
    }


    return Max ; 
}

int main ()
{
    srand((unsigned)time(NULL) ); 
    int Array[100] ; 
    int ArrayLength ; 
    ReadRandomArray(Array , ArrayLength) ;
    PrintArray(Array , ArrayLength) ; 

    cout << "The max is : " << MaxValue(Array , ArrayLength) ; 

    return 0 ; 
}