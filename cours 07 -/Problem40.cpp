#include<iostream>
#include <vector>

using namespace std ; 

// string Join(vector<string> vstr , string sep)
// {
//     string str ; 
//     int i = 0 ;
//     while ( i < vstr.size() )
//     {
//         str = str + vstr[i] ;           
//         if ( i + 1 != vstr.size() )
//             str = str + sep ; 
//         i++ ; 
//     }
//     return str ; 
// }
string Join(vector<string> vstr , string sep)
{
    string str ; 
    for ( string &s : vstr)
    {
        str = str + s + sep ;
    }
    return str = str.substr(0,str.length() - sep.length()) ; 
}
string Join(string array[] , int size , string sep)
{
    string str ; 
    int i = 0 ; 
    while ( i < size )
    {
        str = str + array[i] ; 
        if ( i + 1 != size)
            str = str + sep ; 
        i++ ; 
    }
    return str ; 
}

int main()
{
    vector<string> vstr {"yahya" , "sihame" , "malk" , "nta"} ; 
    string Arrays[] = {"yahya" , "sihame" , "malk" , "nta"} ; 
    cout << "the string is : " << endl << Join(Arrays ,4, "++++") << endl ; 
    cout << "the string is : " << endl << Join(vstr, "++++") << endl ; 
}