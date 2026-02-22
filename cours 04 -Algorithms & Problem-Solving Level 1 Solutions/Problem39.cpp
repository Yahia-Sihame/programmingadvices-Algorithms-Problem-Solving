#include<iostream>
using namespace std ; 




float ReadNumber(string message)
{
    float Number ;
    cout << message ; 
    cin >> Number ; 


    return Number ; 
}


float CalculatePaid(float TotalBill , float CashPaid)
{
    return CashPaid - TotalBill ; 
}

void PrintResult(float Result)
{
    cout << "The result is : " << Result ; 
}

int main()
{
    float TotalBill = ReadNumber("Enter Total Bill : ") ; 
    float CashPaid =ReadNumber("Enter Cash Paid : ") ; 

    PrintResult(CalculatePaid(TotalBill,CashPaid)) ; 

    return 0 ; 
}