#include<iostream>
using namespace std ; 


struct strTaskDuration
{
    float Days , Hours , Minutes , Seconds ;
} ; 

float ReadPositiveNumber(string message)
{
    float Number ;
    do 
    {
        cout << message ; 
        cin >> Number ; 
    } while (Number < 0 ) ; 


    return Number ; 
}
strTaskDuration ReadTaskDuration()
{
    strTaskDuration TaskDuration ; 
    TaskDuration.Days = ReadPositiveNumber("Enter Number of days : ") ; 
    TaskDuration.Hours = ReadPositiveNumber("Enter Number of Hours : ") ;
    TaskDuration.Minutes = ReadPositiveNumber("Enter Number of Minutes : ") ;
    TaskDuration.Seconds = ReadPositiveNumber("Enter Number of seconds : ") ;

    
    return TaskDuration ; 
}



float  CalculateTheSecondes(strTaskDuration TaskDuration)
{
    TaskDuration.Seconds += TaskDuration.Days * 24 * 60 * 60 ;
    TaskDuration.Seconds += TaskDuration.Hours * 60 * 60 ; 
    TaskDuration.Seconds += TaskDuration.Minutes * 60 ; 


    return TaskDuration.Seconds ; 
}

void PrintResult(float Secondes )
{
    cout << "The seconds is : " << Secondes ; 
}
int main()
{
    strTaskDuration TaskDuration  = ReadTaskDuration() ; 

    PrintResult(CalculateTheSecondes(TaskDuration)) ; 

     
    return 0 ; 
}