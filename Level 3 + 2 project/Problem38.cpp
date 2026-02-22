#include<iostream>
using namespace std ; 


string ReadString()
{
    string str ; 
    cout << "Please Enter your string : " ; 
    getline(cin,str) ; 
    return str ; 
}

string TrimLeft(string str )
{
    int i = 0 ;
    while ( str[i] )
    {
        if ( str[i] != ' ' )
            return str = str.substr(i , str.length() - 1 ) ;
        i++ ; 
    }
    return "" ; 
}
string TrimRight(string str )
{
    int i = str.length() - 1 ;
    while ( i >= 0 )
    {
        if ( str[i] != ' ' )
            return str = str.substr(0 , i +1 ) ;
        i-- ; 
    }
    return "" ; 
}

string Trim(string str)
{
    return TrimLeft(TrimRight(str)) ; 
}


int main()
{
    string str = "       yahya sihame.   " ; 

    cout << "Trim right :" << TrimRight(str) << endl ; 
    cout << "Trim Left :" << TrimLeft(str) << endl ; 
    cout << "Trim :" << Trim(str) << endl ; 

}