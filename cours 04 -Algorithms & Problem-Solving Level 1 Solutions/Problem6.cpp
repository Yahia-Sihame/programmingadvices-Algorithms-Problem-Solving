#include<iostream>
using namespace std ; 

struct FullName{
    string FirstName ; 
    string LastName ;
    bool English ; 
}; 

FullName ReadFullName()
{
    FullName Person ; 
    cout << "Enter your First Name ; " ; 
    cin >> Person.FirstName ; 
    cout << "Enter your Last Name ; " ; 
    cin >> Person.LastName ; 
    cout << "Your name on english or not : " ; 
    cin >> Person.English ; 

    return Person ; 
}

string GetFullName(FullName Person )
{
    string FullName = "" ;  
    if (Person.English)
        return FullName = Person.LastName + " " + Person.FirstName ; 
    return FullName = Person.FirstName + " " +  Person.LastName ; 
}

void PrintFullName(string FullName)
{
    cout << "Your Fall name is : " << FullName ; 
}
int main ()
{
    PrintFullName(GetFullName(ReadFullName())) ; 

    return 0 ; 
}