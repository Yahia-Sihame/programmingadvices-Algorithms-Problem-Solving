#include<iostream>
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
            cout << setw(3) << Matrix[i][j] << "    " ; 
            j++ ; 
        }
        cout << endl ; 
        i++ ; 
    }
}

void Multiple2Matrix(int Matrix1[3][3] , int Matrix2[3][3] ,  int ResultMatrix[3][3])
{
    int i = 0 ; 
    int j = 0 ;
    while ( i < 3 )
    {
        j = 0 ;  
        while ( j < 3 )
        {
            ResultMatrix[i][j] = Matrix1[i][j] * Matrix2[i][j] ; 
            j++ ; 
        } 
        i++ ; 
    } 
}

void PrintTab(int Tab[3])
{
    int i = 0 ; 
    while ( i < 3)
    {
        cout << "Col " << i + 1 << " Sum = " << Tab[i] << endl ; 
        i++;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    
    int Matrix1[3][3] ;
    int Matrix2[3][3] ; 
    int ResultMatrix[3][3] ;
    cout << "Matrix 1 : "<< endl ;  
    FillMatrix(Matrix1) ;
    PrintMatrix(Matrix1) ; 
    cout << "Matrix 2 :" << endl ; 
    FillMatrix(Matrix2) ; 
    PrintMatrix(Matrix2) ;
    cout << "Result is : " << endl ;  
    Multiple2Matrix(Matrix1,Matrix2 , ResultMatrix) ;
    PrintMatrix(ResultMatrix) ; 
}