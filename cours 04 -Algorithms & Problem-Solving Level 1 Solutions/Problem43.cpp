#include<iostream>
using namespace std ; 


struct strTaskDuration
{
    float Days , Hours , Minutes , Seconds ;
} ; 

int ReadPositiveNumber(string message)
{
    int Number ;
    do 
    {
        cout << message ; 
        cin >> Number ; 
    } while (Number < 0 ) ; 


    return Number ; 
}
strTaskDuration ReadTaskDuration( int Seconds )
{
    strTaskDuration TaskDuration ; 
    int SecondsToDays = 24*60*60 ; 
    int SecondsToHours = 60*60 ; 
    int SecondsToMinutes = 60 ; 
    TaskDuration.Days = floor(Seconds/SecondsToDays) ;
    int Remainder = (Seconds % SecondsToDays) ; 
    TaskDuration.Hours = floor(Remainder/SecondsToHours) ;
    Remainder = Remainder % SecondsToHours ; 
    TaskDuration.Minutes = floor(Remainder/SecondsToMinutes) ; 
    Remainder = Remainder % SecondsToMinutes ; 
    TaskDuration.Seconds = Remainder ;

    
    return TaskDuration ; 
}




void PrintResult(strTaskDuration TaskDuration )
{
    cout << "The days is : " << TaskDuration.Days << endl ; 
    cout << "The Hours is : " << TaskDuration.Hours << endl ; 
    cout << "The Minutes is : " << TaskDuration.Minutes << endl ; 
    cout << "The Seconds is : " << TaskDuration.Seconds << endl ; 
}
int main()
{
    strTaskDuration TaskDuration  = ReadTaskDuration(ReadPositiveNumber("Enter the seconds : "))  ; 

    PrintResult(TaskDuration) ; 

     
    return 0 ; 
}