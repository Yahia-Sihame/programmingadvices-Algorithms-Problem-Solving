#include<iostream>
using namespace std ; 

enum TypeCharactere{SmallLetter = 1 , CapitalLetter = 2 , SpecialCharacter = 3 , Digit = 4 } ; 

int RandomNumber(int From , int To )
{
    int Random = rand() % (To - From + 1 ) + From ; 

    return Random ; 
}

char GetRandomCharacter(TypeCharactere Type)
{
    switch (Type)
    {
        case TypeCharactere::SmallLetter : 
        {
            return (char)RandomNumber(97,122) ; 
            break ; 
        }
        case TypeCharactere::CapitalLetter : 
        {
            return (char)RandomNumber(65,90) ; 
            break ; 
        }
        case TypeCharactere::SpecialCharacter : 
        {
            return (char)RandomNumber(33,47) ; 
            break ; 
        }
        case TypeCharactere::Digit : 
        {
            return (char)RandomNumber(48,57) ; 
            break ; 
        }
    }
}

int main()
{
    srand((unsigned)time(NULL) ); 

    cout << RandomNumber(20,55) << endl  ;
    cout << RandomNumber(20,55) << endl  ;
    cout << RandomNumber(20,55) << endl  ;

    cout << GetRandomCharacter(TypeCharactere::SmallLetter) << endl ; 
    cout << GetRandomCharacter(TypeCharactere::CapitalLetter) << endl ; 
    cout << GetRandomCharacter(TypeCharactere::SpecialCharacter) << endl ; 
    cout << GetRandomCharacter(TypeCharactere::Digit) << endl ; 

    return 0 ; 
}