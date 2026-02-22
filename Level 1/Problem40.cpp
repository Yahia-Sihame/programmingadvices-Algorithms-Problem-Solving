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

float CalculateTotalBill(float BillValue)
{
    float TotaleBill = BillValue * 1.1 ; 
    TotaleBill = TotaleBill *1.16 ; 
    return TotaleBill ; 
}

void PrintResult(float TotalBill)
{
    cout << "Total Bill is : " << TotalBill ; 
}

int main ()
{
    PrintResult(CalculateTotalBill(ReadPositiveNumber("Enter the Bill Value : "))) ; 


    return 0 ;
}