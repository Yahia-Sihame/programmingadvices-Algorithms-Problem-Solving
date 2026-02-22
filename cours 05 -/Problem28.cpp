#include<iostream>
using namespace std ; 

enum enPrimeOrNot{Prime = 1 , NotPrime = 2 } ;

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
enPrimeOrNot PrimeNumber(int Number)
{
    for ( int i = 2 ; i <= Number / 2 ; i++ )
    {
        if ( Number % i == 0 )
            return enPrimeOrNot::NotPrime ; 
    }

    return enPrimeOrNot::Prime ; 
}
void PrimeArray (int Array1[100] , int Array2[100] , int ArrayLength , int &ArrayLength2)
{
    int j = 0 ; 
    for ( int i = 0 ; i < ArrayLength ; i++ )
    {
        if ( PrimeNumber(Array1[i])  == enPrimeOrNot::Prime)
        {
            Array2[j++] = Array1[i] ; 
        }
    }
    ArrayLength2 = j ; 
}

int main()
{
    srand((unsigned)time(NULL) ); 

    int Array1[100] , Array2[100] ; 
    int ArrayLength , ArrayLength2; 
    ReadRandomArray(Array1,ArrayLength) ; 

    PrimeArray(Array1,Array2,ArrayLength,ArrayLength2) ; 

    cout << "Array 1 : " ; 
    PrintArray(Array1,ArrayLength) ; 


    cout << "Array 2 : " ; 
    PrintArray(Array2,ArrayLength2) ; 

    

    return 0 ; 
}