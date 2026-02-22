#include<iostream>
#include<math.h>
using namespace std ; 

void ReadTriangleData(float &A, float &B, float &C)
{ 
    cout << "Enter the Triangle side A : " ; 
    cin >> A ; 
    cout << "Enter the Triangle Base B : " ; 
    cin >> B ; 
    cout << "Enter the Triangle side A : " ; 
    cin >> C ; 
}

float CircleAriaByItriangle(float A , float B , float C )
{
    const float PI = 3.14159 ; 
    float P = (A + B + C) / 2 ; 
    float D = (A*B*C)/ (4 * sqrt (P*(P-A)*(P-B)*(P-C))) ; 
    return PI * pow(D, 2) ; 
}

void PrintResulats(float A)
{
    cout << "The Aria of circle is : " << A ; 
}


int main ()
{
    float A , B , C; 
    ReadTriangleData(A,B,C) ;
    PrintResulats(CircleAriaByItriangle(A,B,C)) ; 

    return 0 ;
}