#include<iostream>
using namespace std ; 

enum enPassFill {Pass = 1 , Fail = 2 } ; 

float ReadMark()
{
    float Mark ; 
    cout << "Enter your mark : " ; 
    cin >> Mark ; 

    return Mark ; 
}

enPassFill CheckMark(float Mark )
{
    if ( Mark >= 50 )
        return enPassFill::Pass ; 
    return enPassFill::Fail ; 
}
void PrintCheckMark(enPassFill Mark )
{
    if ( Mark == 1)
        cout << "Pass" ;
    else
        cout << "Fail" ;  
}
int main ()
{
    PrintCheckMark(CheckMark(ReadMark())) ; 

    return 0 ; 
}