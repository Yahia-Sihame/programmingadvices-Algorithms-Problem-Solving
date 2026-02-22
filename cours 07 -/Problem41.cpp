#include<iostream>
using namespace std ; 


string ReadString()
{
    string str ; 
    cout << "Please Enter your string : " ; 
    getline(cin,str) ; 
    return str ; 
}

vector<string> split(string str , string del)
{
    vector<string> vstr ; 
    int pos = 0 ;
    string sword ;
    while ( (pos = str.find(del)) != std::string::npos )
    {
        sword = str.substr(0,pos) ; 
        if ( sword != "" )
            vstr.push_back(sword) ;
        str = str.erase(0,pos + del.length()) ; 
    }
    if ( str != "" )
        vstr.push_back(str) ; 
    
    return vstr ; 
}

string  ReverseWords(string str)
{
    int i = str.length() -1 ;
    vector<string> vstr = split(str," "); 
    string str1 ; 
    vector<string>::iterator it = vstr.end() ; 
    while ( it != vstr.begin())
    {
        --it ; 
        str1 = str1 + *it ;
        if ( it != vstr.begin())  
            str1 = str1 + " " ; 
    }
    return str1 ; 
}

int main()
{
    string str = "yahya sihame malk nta" ; 
    cout << "In Normal is :" << endl << str << endl ;
    cout << "In reverse is :" << endl << ReverseWords(str) ;

}