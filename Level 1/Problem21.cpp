#include<iostream>
#include<math.h>
using namespace std ; 

float ReadCircomference()
{
    float L ; 
    cout << "Enter the Circomference : " ; 
    cin >> L ; 

    return L ; 
}

float CircleAriaByCircomference(float L)
{
    const float PI = 3.14159 ; 
    return (pow(L,2) / (PI * 4)) ;  
}

void PrintResulats(float A)
{
    cout << "The Aria of circle is : " << A ; 
}


int main ()
{
    PrintResulats(CircleAriaByCircomference(ReadCircomference())) ; 

    return 0 ;
}