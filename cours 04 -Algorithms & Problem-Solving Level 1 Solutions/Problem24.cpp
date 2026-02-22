#include<iostream>
using namespace std ; 

int ReadAge()
{
    int Age ; 
    cout << "Enter your Age : " ; 
    cin >> Age ; 

    return Age ; 
}

bool ValidateNumberInRange(int Age , int From , int To)
{
    return ( Age >= From && Age <= To ) ; 
}

void PrintResults(int Age)
{
    if ( ValidateNumberInRange(Age,18,50) )
        cout << "Age is Valid . \n" ; 
    else 
        cout << "Age is Invalid . \n" ; 
}


int main()
{
    PrintResults(ReadAge()) ; 

    return 0 ; 
}