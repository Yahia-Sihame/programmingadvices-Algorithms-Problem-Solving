#include<iostream>
#include<math.h>
using namespace std ; 

void ReadReactangle(float &Base , float &Height)
{
    cout << "Enter Base of Triangle : " ; 
    cin >> Base ; 
    cout << "Enter Height of Triangle : " ; 
    cin >> Height ; 
}

float TriangeleAria(float Base, float Height)
{
    return (Base/2) * Height ; 
}

void Printresultats(float T)
{
    cout << "The Aria of the Triangle : " << T ; 
}
int main()
{
    float Height ; 
    float Base ; 
    ReadReactangle(Base,Height) ; 
    Printresultats(TriangeleAria(Base,Height)) ; 
    
    return 0 ; 
}