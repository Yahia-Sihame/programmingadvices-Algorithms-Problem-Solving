#include<iostream>
using namespace std ; 

struct stPiggyBankContenet
{
    int Pennies , Nickels , PiggyBankContenet , Dimes , Quarters , Dollars ;  
} ;

stPiggyBankContenet ReadBiggyBankContenet()
{
    stPiggyBankContenet PiggyBankContenet ; 
    cout << "Enter a total Pennies : " ; 
    cin >> PiggyBankContenet.Pennies ;
    cout << "Enter a total Nickels : " ; 
    cin >> PiggyBankContenet.Nickels;
    cout << "Enter a total Dimes : " ; 
    cin >> PiggyBankContenet.Dimes;
    cout << "Enter a total Quarters : " ; 
    cin >> PiggyBankContenet.Quarters;
    cout << "Enter a total  : " ; 
    cin >> PiggyBankContenet.Dollars ;

    return PiggyBankContenet ; 
}

float CalculateTotalePesnnies(stPiggyBankContenet PiggyBankContenet)
{
    float Pesnnies = PiggyBankContenet.Pennies*1 + PiggyBankContenet.Nickels*5 + PiggyBankContenet.Dimes*10 + PiggyBankContenet.Quarters*25 + PiggyBankContenet.Dollars*100 ;  


    return Pesnnies ; 
}


int main ()
{
    int TotalePesnnies = CalculateTotalePesnnies(ReadBiggyBankContenet()) ; 
    cout << "TotalePesnnies is : " << TotalePesnnies << endl ; 
    cout << "Totale Dollars is : " << (float)TotalePesnnies / 100 ; 

    return 0 ; 
}
