#include<iostream>
#include<iomanip>
using namespace std ; 


void FillMatrix(int Matrix[3][3])
{
    int i = 0 ; 
    int j = 0 ; 
    int k = 1 ; 
    while ( i < 3 )
    {
        j = 0 ; 
        while ( j < 3 )
        {
            Matrix[i][j] = k++ ; 
            j++ ; 
        }
        i++ ; 
    }
}

void PrintMatrix(int Matrix[3][3])
{
    int i = 0; 
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


int main()
{
    int Matrix[3][3] ; 
    FillMatrix(Matrix) ; 
    PrintMatrix(Matrix) ; 
}