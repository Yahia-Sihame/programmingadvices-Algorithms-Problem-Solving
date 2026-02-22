#include<iostream> 
using namespace std ; 

void ReadMark(float &Mark1 , float &Mark2 , float &Mark3)
{
    cout << "Enter your mark 1: " ; 
    cin >> Mark1 ; 
    cout << "Enter your mark 1: " ; 
    cin >> Mark2 ; 
    cout << "Enter your mark 1: " ; 
    cin >> Mark3 ; 
}

float SumOf3Marks(float Mark1 , float Mark2 , float Mark3)
{
    float SumMarks ; 
    SumMarks = Mark1 + Mark2 + Mark3 ; 

    return SumMarks ; 
}

void PrintSumMarks(float SumMarks)
{
    cout << "Your Sum Marks is : " << SumMarks ; 
}

int main()
{
    float Mark1 , Mark2 , Mark3 ; 
    ReadMark(Mark1,Mark2,Mark3) ; 
    PrintSumMarks(SumOf3Marks(Mark1,Mark2,Mark3)) ; 

    return 0 ; 
}