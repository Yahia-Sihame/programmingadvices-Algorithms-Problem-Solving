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
                matrix[i][j] = 0 ; 
            else   
                matrix[i][j] = 9 ; 
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

            printf ("%0*d   ", 2 , Matrix[i][j]);
            j++ ; 
        }
        cout << endl ; 
        i++ ; 
    }
}

int MinNumber(int Matrix[3][3])
{
    int min = 0 ;
    int i = 0 ; 
    while ( i < 3 )
    {
        int j = 0 ; 
        while ( j < 3 )
        {
            if ( min > Matrix[i][j])
                min = Matrix[i][j] ; 
            j++ ; 
        }
        i++ ; 
    }
    return min;
}

int MaxNumber(int Matrix[3][3])
{
    int max = 0 ;
    int i = 0 ; 
    while ( i < 3 )
    {
        int j = 0 ; 
        while ( j < 3 )
        {
            if ( max < Matrix[i][j])
                max = Matrix[i][j] ; 
            j++ ; 
        }
        i++ ; 
    }
    return max ;
}

int main()
{
    srand((unsigned) time(NULL)) ; 
    int Matrix1[3][3] = {{10,-2,12},{10,0,1},{10,0,9}};
    //FillMatrix(Matrix1) ;
    cout << "Matrix 1 : "<< endl ;  
    PrintMatrix(Matrix1) ;
    cout << "Max is : " << MaxNumber(Matrix1) << endl ; 
    cout << "Min is : " << MinNumber(Matrix1) << endl ; 
}