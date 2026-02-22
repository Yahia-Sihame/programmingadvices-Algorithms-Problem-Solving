#include<iostream>

using namespace std ; 

float ReadTotaleSales()
{
    float TotaleSales  ;  
    cout << "Enter a Totale Seles : " ; 
    cin >> TotaleSales ; 


    return TotaleSales ;
}

float GetComissionPercentage(float TotaleSles)
{
    if ( TotaleSles >= 1000000 ) return 0.01 ; 
    else if ( TotaleSles >= 500000 ) return 0.02 ; 
    else if ( TotaleSles >= 100000 ) return 0.03 ; 
    else if ( TotaleSles >= 50000 ) return 0.5 ; 
    else return 0.00 ; 
}

float CalculateTotalComission(float TotaleSales)
{
    return GetComissionPercentage(TotaleSales) * TotaleSales ; 
}

int main()
{
    float TotaleSales  = ReadTotaleSales() ;

    cout << "The percentage of Totale Sales is : " << GetComissionPercentage(TotaleSales) << endl  ; 
    cout << "The Totale Comission is : " << CalculateTotalComission(TotaleSales) ; 

    return 0 ; 
}