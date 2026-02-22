#include<iostream>
#include<iomanip>
using namespace std ; 

int RandomNumber(int From , int To)
{
    int Number = rand() % (To - From + 1) + From ;
    return Number ; 
}

void FillMatrix(int Matrix[3][3])
{
    int i = 0 ; 
    int j = 0 ; 
    while ( i < 3 )
    {
        j = 0 ; 
        while ( j < 3 )
        {
            Matrix[i][j] = RandomNumber(1,100) ; 
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

void MidleRow(int Matrix[3][3])
{
    int i = 0 ; 
    while ( i < 3)
    {
        cout << setw(3) << Matrix[1][i] << "    " ;
        i++ ; 
    }
}
void MidleCol(int Matrix[3][3])
{
    int i = 0 ; 
    while ( i < 3)
    {
        cout << setw(3) << Matrix[i][1] << "    " ;
        i++ ; 
    }
}

int main()
{
    int Matrix[3][3] ; 
    FillMatrix(Matrix) ; 
    PrintMatrix(Matrix) ; 
    cout << "\nMidle row is : " << endl ; 
    MidleRow(Matrix) ;
    cout << "\nMidle col is : " << endl ; 
    MidleCol(Matrix) ; 
}