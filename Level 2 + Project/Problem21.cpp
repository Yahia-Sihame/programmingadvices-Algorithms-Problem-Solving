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

void ReturnKey(int Number)
{
    for ( int i = 0 ; i < Number ; i++ )
    {
        cout << "Key [" << i+1 << "] : " << RandomKey() << endl ; 
    }
}



int main()
{
    srand((unsigned)time(NULL) ); 


    ReturnKey(ReadNumber("Enter The Number Of The Key :")) ; 



    return 0 ; 
}