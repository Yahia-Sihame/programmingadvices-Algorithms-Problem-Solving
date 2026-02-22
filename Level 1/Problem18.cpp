#include<iostream>
#include<math.h>
using namespace std ; 

float ReadRadious()
{
    float Radious ; 
    cout << "Enter the radious : " ; 
    cin >> Radious ; 

    return Radious ; 
}

float CircleAria(float Radious)
{
    const float PI = 3.14159 ; 
    return (float)( PI * pow(Radious,2)) ;  
}

void PrintResulats(float Area)
{
    cout << "The Aria of circle is : " << Area ; 
}


int main ()
{
    PrintResulats(CircleAria(ReadRadious())) ; 

    return 0 ;
}