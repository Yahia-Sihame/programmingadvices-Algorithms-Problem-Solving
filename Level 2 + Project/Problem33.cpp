#include<iostream>
using namespace std ; 

int RandomNumber(int From , int To )
{
    int Random = rand() % (To - From + 1 ) + From ; 

    return Random ; 
}
int ReadNumber(string Message )
{
    int Number ; 
    do
    {
        cout << Message ; 
        cin >> Number ; 
    }while ( Number < 0) ; 

    return Number ; 
}
string RandoWord()
{
    string RandomWord = "" ;
    for(int i = 0 ; i < 4 ; i++ )
        RandomWord += char(RandomNumber(65,90)) ; 

    return RandomWord ; 
}
string RandomKey()
{
    string RandomChar = "" ;
    
    RandomChar += RandoWord() + "-" ; 
    RandomChar += RandoWord() + "-" ; 
    RandomChar += RandoWord() + "-" ; 
    RandomChar += RandoWord()  ; 

    return RandomChar ;
}
void ArrayKeys(string Array[100] , int &Length )
{
    cout << "Enter The Length : " ; 
    cin >> Length ; 

    for ( int i = 0 ; i < Length ; i++ )
    {
        Array[i] = RandomKey() ; 
    }
}
void PrintArray(string Array[100] , int Length)
{
    for ( int i = 0 ; i < Length ; i++ )
    {
        cout << "Array[" << i+1 << "] : " <<  Array[i] << endl  ;
    }
}




int main()
{
    srand((unsigned)time(NULL) ); 

    string Array[100] ; 
    int Length ; 

    ArrayKeys(Array,Length) ; 

    PrintArray(Array,Length) ; 



    return 0 ; 
}