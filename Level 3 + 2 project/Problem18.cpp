#include<iostream>
#include<iomanip>
using namespace std ; 

int RandomNumber(int from , int to)
{
    int Number = rand()%(to - from + 1) + from ; 
    return Number ; 
}

void FillMatrix(int Matrix[3][3] )
{
    int i = 0 ; 
    while ( i  < 3 )
    {
        int j = 0 ; 
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
    int i = 0 ; 
    while ( i  <  3 )
    {
        int j = 0 ; 
        while ( j < 3 )
        {
            cout<< setw(3) << Matrix[i][j] << "   " ; 
            j++ ; 
        }
        cout << endl ;
        i++ ; 
    }
}

int GetNumber()
{
    int Number ; 
    cout << "Enter the Number to look for in matrix : " ; 
    cin >> Number ;
    return Number ; 
}

bool SerchNumberInMatrix(int Matrix[3][3] , int Number )
{
    int i = 0 ; 
    while ( i  <  3 )
    {
        int j = 0 ; 
        while ( j < 3 )
        {
            if ( Number == Matrix[i][j])
                return true ; 
            j++ ; 
        }
        i++ ; 
    }
    return false ; 
}

void PrintIntersectionOfTwoMatrix(int Matrix1[3][3] , int Matrix2[3][3])
{
    int i = 0; 
    while ( i < 3)
    {
        int j = 0 ; 
        while ( j < 3)
        {
            if ( SerchNumberInMatrix(Matrix2,Matrix1[i][j]))
            {
                cout << Matrix1[i][j] << "  " ; 
            }
            j++ ; 
        }
        i++ ; 
    }
}

int main()
{
    srand((unsigned)time(NULL)) ; 
    int Matrix1[3][3] = {{77,5,12},{22,20,1},{1,0,9}} ; 
    int Matrix2[3][3] = {{5,80,90},{22,77,1},{10,8,33}}; 
    // FillMatrix(Matrix1) ; 
    // FillMatrix(Matrix2) ; 
    cout << "Matrix 1 : "<< endl ;  
    PrintMatrix(Matrix1) ;
    cout << "Matrix 2 : "<< endl ;  
    PrintMatrix(Matrix2) ;
    cout << "Intersection number ara : " << endl ; 
    PrintIntersectionOfTwoMatrix(Matrix1,Matrix2) ; 

}