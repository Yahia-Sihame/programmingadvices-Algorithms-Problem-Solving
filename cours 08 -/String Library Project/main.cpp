#include<iostream>
#include "ClsString.hpp"

using namespace std ; 


int main()
{
    ClsString String1("yahya Sihame Malk Nta :;") ; 
    ClsString String2 ; 
    cout << String1.GetString() << endl ; 
    String2.SetString("malk") ; 
    cout << String2.GetString() << endl ; 

    cout << endl << endl << "-------------------------" <<  endl << endl ; 

    cout << "ConvertString     : " << String1.ConvertString() << endl ;
    cout << "CountLength       : " << String1.CountLength() << endl ;
    cout << "CountVowels       : " << String1.CountVowels() << endl ;
    cout << "CountWords        : " << String1.CountWords() << endl ;
    cout << "RemovePunctuation : " << String1.RemovePunctuation() << endl ;
    cout << "ReverseWords      : " << String1.ReverseWords() << endl ;
    cout << "StringToLowercase : " << String1.StringToLowercase() << endl ;
    cout << "StringToUpercase  : " << String1.StringToUpercase() << endl ;

}