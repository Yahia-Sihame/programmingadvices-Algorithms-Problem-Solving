#include<iostream>
using namespace std ; 


struct Aria
{
    float width ; 
    float Length ; 
} ; 

Aria ReadAria()
{
    Aria Aria1 ; 
    cout << "Enter width of Aria : " ; 
    cin >> Aria1.width ; 
    cout << "Enter Length of Aria : " ; 
    cin >> Aria1.Length;

    return Aria1 ; 
}

float RectangleOfAria(Aria Aria1)
{
    return Aria1.Length * Aria1.width ; 
}

void PrintResults(float Rectangle)
{
    cout << "The rectangle of Aria is : " << Rectangle ; 
}

int main()
{
    PrintResults(RectangleOfAria(ReadAria())) ; 

    return 0 ; 
}