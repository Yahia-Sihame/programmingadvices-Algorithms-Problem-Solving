#include<iostream>
using namespace std ; 

int RandomNumber(int From , int To )
{
    int Random = rand() % (To - From + 1 ) + From ; 

    return Random ; 
}

int main()
{
    srand((unsigned)time(NULL) ); 

    cout << RandomNumber(20,55) << endl  ;
    cout << RandomNumber(20,55) << endl  ;
    cout << RandomNumber(20,55) << endl  ;

    return 0 ; 
}