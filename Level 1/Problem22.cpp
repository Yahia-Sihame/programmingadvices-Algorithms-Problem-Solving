#include<iostream>
#include<math.h>
using namespace std ; 

void ReadTriangleData(float &A, float &B)
{ 
    cout << "Enter the Triangle side A : " ; 
    cin >> A ; 
    cout << "Enter the Triangle side B : " ; 
    cin >> B ; 

}

float CircleAriaByItriangle(float A , float B)
{
    const float PI = 3.14159 ; 
    return (PI * (pow(B,2) / 4) * ((2*A-B)/(2*A+B))  ) ;  
}

void PrintResulats(float A)
{
    cout << "The Aria of circle is : " << A ; 
}


int main ()
{
    float A , B ; 
    ReadTriangleData(A,B) ;
    PrintResulats(CircleAriaByItriangle(A,B)) ; 

    return 0 ;
}