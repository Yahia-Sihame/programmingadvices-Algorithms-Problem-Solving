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
float AverageOf3Marks(float SumOfMarks)
{
    float AverageOf3Marks ; 
    AverageOf3Marks = SumOfMarks / 3 ; 
    return AverageOf3Marks ; 
}
void PrintSumMarks(float SumMarks)
{
    cout << "Your Sum Marks is : " << SumMarks << endl ; 

}
void PrintAvregeMarks(float AverageOf3Marks)
{
    cout << "Your Average Marks is : " << AverageOf3Marks ; 

}

int main()
{
    float Mark1 , Mark2 , Mark3 ; 
    ReadMark(Mark1,Mark2,Mark3) ; 
    PrintSumMarks(SumOf3Marks(Mark1,Mark2,Mark3)) ; 
    PrintAvregeMarks(AverageOf3Marks(SumOf3Marks(Mark1,Mark2,Mark3))) ; 

    return 0 ; 
}