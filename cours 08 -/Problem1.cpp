#include<iostream>

using namespace std ; 


long long int ReadNumber()
{
    int Number ; 
    cout << "Please enter Number : " ; 
    cin >> Number ; 

    return Number ;
}


string NumberToText(int Number)
{
    if ( Number == 0)
        return "" ; 

    if ( Number >= 1 &&  Number <= 19)
    {
        string Arr[] = {"" , "One" , "Two" , "Three" , "Four" , "Five" 
            , "Six" , "Seven" , "Eight" , "Nine" , "ten" , "Eleven" , "Twelve" 
            , "Thirteen" , "Fourteen" , "Fiveteen" , "Sexteen" , "Seventeen" , "Eighteen" , "Nineteen" } ;

        return Arr[Number] + " " ; 
    }
    if ( Number >= 20 &&  Number <= 99 )
    {
        string Arr[] = {"" , "" , "Twenty" , "Thirty" , "Forty" , "Fifty" , "Sixty" , "Seventy" , "Eighty" , "Ninety"} ;

        return Arr[ Number / 10] + " " + NumberToText(Number % 10) ;
    }
    if ( Number >= 100 && Number <= 199)
    {
        return "one Hundred " + NumberToText(Number % 100) ;
    }
    if ( Number >= 200 && Number <= 999)
    {
        return NumberToText(Number / 100) + "Hundreds " + NumberToText(Number % 100) ;
    }
    if ( Number >= 1000 && Number <= 1999)
    {
        return "one Thousand " + NumberToText(Number % 1000) ;
    }
    if ( Number >= 2000 && Number <= 999999)
    {
        return NumberToText(Number / 1000) + "Thousands " + NumberToText(Number % 1000) ;
    }
    if ( Number >= 1000000 && Number <= 1999999)
    {
        return "one Million " + NumberToText(Number % 1000000) ;
    }
    if ( Number >= 2000000 && Number <= 999999999)
    {
        return NumberToText(Number / 1000000) + "Millions " + NumberToText(Number % 1000000) ;
    }
    if ( Number >= 1000000000 && Number <= 1999999999)
    {
        return "one Billion " + NumberToText(Number % 1000000000) ;
    }
    else
        return NumberToText(Number / 1000000000) + "Billions " + NumberToText(Number % 1000000000) ;

}

int main()
{
    cout << NumberToText(ReadNumber()) ; 
}