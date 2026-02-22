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
int PositionNumberOfArray(int Array[100] , int ArrayLength  , int Number)
{
    for (int i = 0 ; i < ArrayLength ; i++ )
    {
        if ( Number == Array[i])
            return i ; 
    }
    return -1 ; 
}

bool SercheNumberOfArray(int Array[100] , int ArrayLength  , int Number)
{
    int Position = PositionNumberOfArray(Array,ArrayLength,Number) ; 
    if ( Position == -1)
        return false ; 
    else
        return true ; 
}
void PrintResult(int Array[100] , int ArrayLength , int Number)
{
    bool Position = SercheNumberOfArray(Array,ArrayLength,Number) ; 
    if ( Position != false )
    {
        cout << "Number You Are Loking For Is : " << Number << endl ;
        cout << "The Number is Found :-) " ; 
    }
    else
    {
        cout << "Number You Are Loking For Is : " << Number << endl ;
        cout << "The Number Is Not Found !" << endl ; 
    }      
}

int main()
{
    srand((unsigned)time(NULL) ); 

    int Array1[100] , ArrayLength ; 

    ReadRandomArray(Array1,ArrayLength) ; 
    PrintArray(Array1,ArrayLength) ;
    
    int Number = ReadNumber("Please Enter A Number To Serch For : ") ; 

    PrintResult(Array1,ArrayLength,Number) ; 



    return 0 ; 
}