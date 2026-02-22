#include<iostream>
#include<math.h>
using namespace std ; 

void ReadReactangle(float &Length , float &Diagonal)
{
    cout << "Enter Length of Aria : " ; 
    cin >> Length ; 
    cout << "Enter Diagonal of Aria : " ; 
    cin >> Diagonal ; 
}

float CalculationAria(float Length , float Diagonal)
{
    return Length * sqrt( pow(Diagonal,2) - pow(Length,2) ) ; 
}

void Printresultats(float Aria)
{
    cout << "The Aria of the reactangle is : " << Aria ; 
}
int main()
{
    float Length ; 
    float Diagonal ; 
    ReadReactangle(Length,Diagonal) ; 
    Printresultats((CalculationAria(Length,Diagonal))) ; 
    
    return 0 ; 
}