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

void SumRowsToTab(int Matrix[3][3] , int Tab[3])
{
    int i = 0 ; 
    int sum = 0 ;
    while ( i < 3 )
    {
        int j = 0 ; 
        sum = 0 ;  
        while ( j < 3 )
        {
            sum = sum + Matrix[i][j] ; 
            j++ ; 
        }
        Tab[i] = sum ;  
        i++ ; 
    } 
}

void PrintTab(int Tab[3])
{
    int i = 0 ; 
    while ( i < 3)
    {
        cout << "Row " << i + 1 << " Sum = " << Tab[i] << endl ; 
        i++;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int Matrix[3][3] ;
    int Tab[3] ; 
    FillMatrix(Matrix) ;
    cout << "The following is a 3x3 random matrix : "<< endl ;  
    PrintMatrix(Matrix) ; 
    cout << "The following are the sum of eatch row in the matrix :" << endl ; 
    SumRowsToTab(Matrix,Tab) ;
    PrintTab(Tab) ; 
}