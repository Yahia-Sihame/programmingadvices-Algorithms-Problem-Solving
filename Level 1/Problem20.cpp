#include<iostream>
#include<math.h>
using namespace std ; 

float ReadSquareSide()
{
    float A ; 
    cout << "Enter the Square Side : " ; 
    cin >> A ; 

    return A ; 
}

float CircleAriaInscribedInSquare(float A)
{
    const float PI = 3.14159 ; 
    return (PI * pow(A,2)) / 4 ;  
}

void PrintResulats(float A)
{
    cout << "The Aria of circle is : " << A ; 
}


int main ()
{
    PrintResulats(CircleAriaInscribedInSquare(ReadSquareSide())) ; 

    return 0 ;
}