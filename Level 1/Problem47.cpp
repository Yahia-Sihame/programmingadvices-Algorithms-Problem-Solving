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

int MonthToSettleYourLoan(int LoanAmount, int MonthlyPayment)
{
    return LoanAmount / MonthlyPayment ; 
}

void printResult(int Result)
{
    cout << Result << " Months. " ; 
}

int main ()
{
    int LoanAmount = ReadPositiveNumber("Enter Your Loan Amount : ") ; 
    int MonthlyPayment = ReadPositiveNumber("Enter You Monthly Payment : ") ; 

    printResult(MonthToSettleYourLoan(LoanAmount,MonthlyPayment)) ; 

    return 0 ; 
}

