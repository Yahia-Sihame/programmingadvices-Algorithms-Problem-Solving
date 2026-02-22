#include<iostream>
using namespace std ; 


enum enDays{Sunday = 1 , Monday = 2 , Tuesday = 3 , Wednsday = 4 , Thursday  = 5 , Friday = 6 , Saturday = 7  } ;

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
enDays ReadDayOfWeek(int Number)
{
    return (enDays)Number ; 
}
void CheckDays(enDays Day)
{
    switch (Day)
    {
        case enDays::Sunday : 
            cout << "sunday ." ; 
            break ;  
        case enDays::Monday : 
            cout << "Monday ." ; 
            break ;  
        case enDays::Tuesday : 
            cout << "Tuesday ." ; 
            break ;  
        case enDays::Wednsday: 
            cout << "Wednsday ." ; 
            break ;  
        case enDays::Thursday : 
            cout << "Thursday ." ; 
            break ;  
        case enDays::Friday : 
            cout << "Friday ." ; 
            break ;  
        case enDays::Saturday : 
            cout << "saturday ." ;
            break ; 
        default : 
            cout << "Wrong Day ." ;     
    }
}

int main ()
{
    CheckDays(ReadDayOfWeek(ReadPositiveNumber("Please Enter A Number : "))) ; 

    return 0 ; 
}