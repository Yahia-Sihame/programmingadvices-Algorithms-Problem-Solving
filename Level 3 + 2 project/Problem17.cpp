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

int main()
{
    int Number = GetNumber() ;
    srand((unsigned)time(NULL)) ; 
    int Matrix[3][3] ; 
    FillMatrix(Matrix) ; 
    cout << "Matrix 1 : "<< endl ;  
    PrintMatrix(Matrix) ;
    (SerchNumberInMatrix(Matrix , Number)) ? cout << "Yes it is there ." : cout << "No it is Not there ." ;

}