#include<iostream>
using namespace std ; 




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

float CalculateWeeks(float Hours)
{
    return (float) Hours / 168 ; 
}

float calculateDays(float Hours)
{
    return (float) Hours / 24 ; 
}

void PrintResultsOfWeeks(float Result)
{
    cout << Result << " Weeks ." << endl ; 
}
void PrintResultsOfDays(float Result)
{
    cout << Result << " Days ." << endl ; 
}
int main()
{
    float Hours = ReadPositiveNumber("Enter your Hours : ") ; 
    PrintResultsOfWeeks(CalculateWeeks(Hours)) ; 
    PrintResultsOfDays(calculateDays(Hours)) ; 

    return 0 ; 
}