#include<iostream>
using namespace std ; 
enum enCheck{add = 1 , multiply = 2 , subtract = 3 , divid = 4 , clear = 5 , cancel = 6} ;

class clsCalculator
{
private : 
    int _Value = 0 ;
    int _NewVal ;
    int Check ;
public :
    void Add(int Value)
    {
        _NewVal = Value ;
        _Value += _NewVal ;
        Check = 1 ; 
    }

    void Multiply(int Value)
    {
        _NewVal = Value ;
        _Value*= _NewVal ;
        Check = 2 ; 
    }

    void Subtract(int Value)
    {
        _NewVal = Value ;
        _Value -= _NewVal ;
        Check = 3 ; 
    }

    void Divid(int Value)
    {
        if (Value != 0)
            _NewVal = Value ;
        else 
            _NewVal = 1 ; 
            _Value /= _NewVal ;
            Check = 4 ; 
    }

    void Clear()
    {
        _Value = 0 ;
        Check = 5 ;
    }

    void PrintResult()
    {
        switch(Check)
        {
            case enCheck::add :
                cout << "Result After Adding " << _NewVal << " is : " <<  _Value << endl ;
                break ; 
            case enCheck::multiply :
                cout << "Result After Multiplaying " << _NewVal << " is : " <<  _Value << endl ;
                break ; 
            case enCheck::subtract :
                cout << "Result After Substracting " << _NewVal << " is : " <<  _Value << endl ;
                break ; 
            case enCheck::divid :
                cout << "Result After Dividing " << _NewVal << " is : " <<  _Value << endl ;
                break ; 
            case enCheck::clear : 
                cout << "Result After Clear is : " <<  _Value << endl ;
                break;
            case enCheck::cancel :
                cout << "Result After Cancel Last Operator is :" << _Value << endl ;
                break ;
        }
    }
    void CancelLastOperation()
    {
        switch(Check)
        {
            case enCheck::add :
                _Value -= _NewVal ;
                break ; 
            case enCheck::multiply :
                _Value /= _NewVal ;
                break ; 
            case enCheck::subtract :
                _Value += _NewVal ;
                break ; 
            case enCheck::divid :
                _Value *= _NewVal ;
                break ; 
        }
        Check = 6 ;
    }

} ;


int main()
{
    clsCalculator Calculator1 ; 
    Calculator1.Add(10) ; 
    Calculator1.PrintResult() ; 

    Calculator1.Add(20) ; 
    Calculator1.PrintResult() ; 

    Calculator1.Clear() ; 
    Calculator1.PrintResult() ; 

    Calculator1.Add(1) ; 
    Calculator1.Multiply(30) ; 
    Calculator1.PrintResult() ; 

    Calculator1.Divid (30) ; 
    Calculator1.PrintResult() ; 

    Calculator1.Divid (0) ; 
    Calculator1.PrintResult() ; 

    Calculator1.Subtract(10) ; 
    Calculator1.PrintResult() ;

    Calculator1.CancelLastOperation() ;
    Calculator1.PrintResult() ;

    Calculator1.Clear() ; 
    Calculator1.PrintResult() ;
}