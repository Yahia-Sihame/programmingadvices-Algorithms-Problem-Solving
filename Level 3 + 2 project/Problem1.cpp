#include<iostream>
// setw(3) using 3 playse in the digits
#include<iomanip>
using namespace std;


int RandomNumber(int From , int To)
{
    int Number = rand() % (To - From + 1) + From ; 
    return Number ; 
}

void FillMatrix(int Matrix[3][3])
{
    int i = 0 ; 
    while ( i < 3 )
    {
        int j = 0 ; 
        while ( j < 3)
        {
            Matrix[i][j] = RandomNumber(1,100) ; 
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
            cout << setw(3) << Matrix[i][j] << "   " ;
            j++ ; 
        }
        cout << endl ; 
        i++ ;
    }
}

int main()
{
    //Seeds the random number generator in C++, called only once 
    srand((unsigned)time(NULL));
    int Matrix[3][3] ;
    FillMatrix(Matrix) ; 
    PrintMatrix(Matrix) ; 
}