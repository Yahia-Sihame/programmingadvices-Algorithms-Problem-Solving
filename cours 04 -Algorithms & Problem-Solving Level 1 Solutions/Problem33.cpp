#include<iostream>
using namespace std ; 

enum enABCDEF{ A = 1 , B = 2 , C = 3 , D = 4 , E = 5 , F = 6} ;

float ReadGrade()
{
    float Grade ; 
    cout << "Enter Grade. " ; 
    cin >> Grade ; 

    return Grade; 
}

enABCDEF CheckGrade(float Grade)
{
    if(Grade <= 100 && Grade >=90 ) return enABCDEF::A ; 
    else if(Grade <= 89 && Grade >=80 ) return enABCDEF::B ; 
    else if(Grade <= 79 && Grade >=70 ) return enABCDEF::C ; 
    else if(Grade <= 69 && Grade >=60 ) return enABCDEF::D ; 
    else if(Grade <= 59 && Grade >=50 ) return enABCDEF::E ; 
    else return enABCDEF::F ; 
}

void PrintResults(enABCDEF Result)
{
    if ( Result == enABCDEF::A ) cout << "A"  ; 
    else if ( Result == enABCDEF::B ) cout << "B" ; 
    else if ( Result == enABCDEF::C ) cout << "C" ; 
    else if ( Result == enABCDEF::D ) cout << "D" ; 
    else if ( Result == enABCDEF::E ) cout << "E" ; 
    else cout << "F" ; 
}


int main()
{
    PrintResults(CheckGrade(ReadGrade())) ; 
    
    return 0 ; 
}