#include<iostream>
#include<math.h>
using namespace std ; 

float ReadRadious()
{
    float Diameter ; 
    cout << "Enter the Diameter : " ; 
    cin >> Diameter ; 

    return Diameter ; 
}

float CircleAriaByDiameter(float Diameter)
{
    const float PI = 3.14159 ; 
    return (PI*pow(Diameter,2) / 4 );  
}

void PrintResulats(float Area)
{
    cout << "The Aria of circle is : " << Area ; 
}


int main ()
{
    PrintResulats(CircleAriaByDiameter(ReadRadious())) ; 

    return 0 ;
}