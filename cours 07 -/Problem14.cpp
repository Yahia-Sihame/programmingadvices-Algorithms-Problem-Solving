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

bool isScalar(int Matrix1[3][3])
{
    int i = 0 ; 
    int j = 0 ;
    int check = Matrix1[0][0] ; 
    while ( i < 3 )
    {
        j = 0 ; 
        while ( j < 3 )
        {
            if ( i == j )
            {
                if (( Matrix1[i][j] != check ))
                    return false ; 
            }
            else if ( i != j)
            {
                if ( Matrix1[i][j] != 0)
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
    FillMatrix(Matrix1) ;
    cout << "Matrix 1 : "<< endl ;  
    PrintMatrix(Matrix1) ;
    (isScalar(Matrix1)) ? cout << "Matrix is Scaler ." : cout << "Matrix is Not Scaler ." ; 
}