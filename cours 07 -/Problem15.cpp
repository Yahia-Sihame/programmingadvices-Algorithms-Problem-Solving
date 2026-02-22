#include<iostream>
#include<string>
#include<iomanip>
using namespace std ; 

int RandomNumber(int From , int To)
{
    int Number = rand() % (To - From + 1) + From ;
    return Number ; 
}

void FillMatrix(int matrix[3][3])
{
    int i = 0 ; 
    while ( i < 3 )
    {
        int j = 0 ; 
        while ( j < 3 )
        {
            if ( i == j )
                matrix[i][j] = 9 ; 
            else   
                matrix[i][j] = 0 ; 
            j++ ; 
        }
        i++ ; 
    }
}

int GetNumber()
{
    int Number ; 
    cout << "Enter the Number to count in matrix : " ; 
    cin >> Number ;
    return Number ; 
}

int CountNumberInMatrix(int Matrix[3][3] , int Number)
{
    int count = 0 ;
    int i = 0 ; 
    while ( i < 3 )
    {
        int j = 0 ; 
        while ( j < 3 )
        {
            if ( Matrix[i][j] == Number)
                count++ ;
            j++ ; 
        }
        i++ ; 
    }
    return count ; 
}

void PrintMatrix(int Matrix[3][3])
{
    int i = 0 ; 
    while ( i < 3 )
    {
        int j = 0 ; 
        while ( j < 3 )
        {

            printf ("%0*d   ", 2 , Matrix[i][j]);
            j++ ; 
        }
        cout << endl ; 
        i++ ; 
    }
}

int PrintSumMatrix(int Matrix[3][3])
{
    int i = 0 ; 
    int sum = 0 ;
    while ( i < 3)
    {
        int j = 0 ; 
        while ( j < 3 )
        {
            sum = sum + Matrix[j][i] ; 
            j++ ; 
        }
        i++ ; 
    }
    return sum ; 
}

int main()
{
    int Number = GetNumber() ; 
    srand((unsigned) time(NULL)) ; 
    int Matrix1[3][3] ;
    FillMatrix(Matrix1) ;
    cout << "Matrix 1 : "<< endl ;  
    PrintMatrix(Matrix1) ;
    cout << "Number " << Number << "count in Matrix is " << CountNumberInMatrix(Matrix1 , Number) ; 
}