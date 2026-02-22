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

bool isPalindrom(int Matrix[3][3])
{
    int i = 0 ; 
    while ( i < 3)
    {
        int j = 0 ;
        while ( j < 3 / 2 )
        {
            if (Matrix[i][j] != Matrix[i][3 - 1 - j])
                return false ; 
            j++ ; 
        }
        i++ ; 
    }
    return true ;
}
int main()
{
    srand((unsigned) time(NULL)) ; 
    int Matrix1[3][3] = {{1,2,1},{5,5,5},{7,3,7}};
    //FillMatrix(Matrix1) ;
    cout << "Matrix 1 : "<< endl ;  
    PrintMatrix(Matrix1) ;
    (isPalindrom(Matrix1)) ? cout << "Yes is palindrom ." : cout << "No is Not palindrom ." ;
}