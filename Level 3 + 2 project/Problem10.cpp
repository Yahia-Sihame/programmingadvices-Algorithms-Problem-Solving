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
    return sum  ; 
}

int main()
{
    srand((unsigned) time(NULL)) ; 
    int Matrix[3][3] ;
    FillMatrix(Matrix) ;
    cout << "Matrix 1 : "<< endl ;  
    PrintMatrix(Matrix) ; 
    cout << "Sum of matrix 1 is : " << PrintSumMatrix(Matrix) << endl ; 
}