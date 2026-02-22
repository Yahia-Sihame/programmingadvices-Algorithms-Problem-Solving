#include<iostream>

using namespace std ;


string ReadName()
{
    string Name ; 
    cout << " Enter your name : " ; 
    getline(cin,Name) ;
    return Name ; 
}
void PrintName(string Name)
{
    cout << "\nYour name is: "<< Name << endl ; 
}


int main ()
{ 

    PrintName(ReadName()) ; 

    return 0 ; 
}