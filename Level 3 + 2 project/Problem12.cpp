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
            matrix[i][j] = RandomNumber(1 , 100) ; 
            j++ ; 
        }
        i++ ; 
    }
}


void PrintMatrix(int Matrix[3][3])
{
    int i = 0 ; 
    while ( i < 3 )
    {
        int j = 0 ; 
        while ( j < 3 )
        {

            printf ("%0*d   ",2 , Matrix[i][j]);
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

bool isequal(int Matrix1[3][3] , int Matrix2[3][3])
{
    int i = 0 ; 
    int j = 0 ;
    while ( i < 3 )
    {
        j = 0 ; 
        while ( j < 3 )
        {
            if ( Matrix1[i][j] != Matrix2[i][j])
            {
                return false ; 
            }
            j++ ; 
        }
        i++ ; 
    }
    return true ; 
}

int main()
{
    srand((unsigned) time(NULL)) ; 
    int Matrix1[3][3] ;
    int Matrix2[3][3] ; 
    FillMatrix(Matrix1) ;
    FillMatrix(Matrix2) ;
    cout << "Matrix 1 : "<< endl ;  
    PrintMatrix(Matrix1) ;
    cout << "Matrix 2 : "<< endl ;  
    PrintMatrix(Matrix2) ; 
    (isequal(Matrix1,Matrix2)) ? cout << "Matrix are Typical" : cout << "Matrix are Not Typical" ; 
}