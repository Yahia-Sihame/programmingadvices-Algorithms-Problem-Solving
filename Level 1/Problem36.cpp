#include<iostream>
using namespace std ; 

enum enOperationType{ Add = '+', Subtract = '-' , Multiply = '*' , Divide = '/' } ; 
float ReadNumber(string message) 
{
    float Number ; 
    cout << message ;
    cin >> Number ; 


    return Number ; 
}
enOperationType ReadOperationType()
{
    char OT = '+' ; 
    cout << "Enter an operation Type '+' or '-' or '/' or '*' : "  ; 
    cin >> OT ; 
    
    return (enOperationType)OT ; 
}


float PrintResult(float Number1 , float Number2 , char Operator)
{
    switch(Operator)  
    {
        case enOperationType::Add : 
            return Number1 + Number2 ;  
        case enOperationType::Subtract : 
            return Number1 - Number2 ; 
        case enOperationType::Multiply : 
            return Number1 * Number2 ;
        case enOperationType::Divide : 
            return Number1 / Number2 ;
        default : 
            return Number1 + Number2 ; 
    }
    
}


int main()
{
    float Number1 = ReadNumber("Enter the first Number : ") ; 
    float Number2 = ReadNumber("Enter the secend Number : ") ; 

    enOperationType OT = ReadOperationType() ; 

    cout << "The result is : " << PrintResult(Number1,Number2,OT) ; 

    
    return 0 ; 
}