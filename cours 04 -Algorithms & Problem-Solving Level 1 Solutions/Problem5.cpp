#include<iostream>
using namespace std ; 

typedef struct 
{
    int Age ; 
    bool IsDriverLisence ; 
    bool HasRecommendation ; 
}PersonInfo ; 

PersonInfo EnterInfoPersone()
{
    PersonInfo Person ; 
    cout << "Enter your Age : " ; 
    cin >> Person.Age ; 
    cout << "Are you have driver lisence ? : " ; 
    cin >> Person.IsDriverLisence ; 
    cout << "Are you have a recommendation ? :" ;
    cin >> Person.HasRecommendation ;
    return Person ; 
}

bool CheckInfoPerson(PersonInfo Person)
{
    if ( Person.HasRecommendation)
        return true ; 
    return (Person.Age > 21 && Person.IsDriverLisence == true) ;
}

void PrintInfoPerson(PersonInfo Person)
{
    if ( CheckInfoPerson(Person))
        printf ("Hired\n") ; 
    else
        printf ("Rejected") ; 
}

int main()
{
    PrintInfoPerson(EnterInfoPersone()) ; 

    return 0 ; 
}