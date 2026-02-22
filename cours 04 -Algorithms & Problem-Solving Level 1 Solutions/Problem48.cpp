#include<iostream>
using namespace std ; 


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

int MonthToSettleYourLoan(int LoanAmount, int Month)
{
    return LoanAmount / Month ; 
}

void printResult(int Result)
{
    cout << Result  ; 
}

int main ()
{
    int LoanAmount = ReadPositiveNumber("Enter Your Loan Amount : ") ; 
    int Month = ReadPositiveNumber("Enter You Number of the Month : ") ; 

    printResult(MonthToSettleYourLoan(LoanAmount,Month)) ; 

    return 0 ; 
}

