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
string Join(vector<string> vstr , string sep)
{
    string str ; 
    for ( string &s : vstr)
    {
        str = str + s + sep ;
    }
    return str = str.substr(0,str.length() - sep.length()) ; 
}

string toolower(string str)
{
    for ( char &s : str)
    {
        s = tolower(s) ; 
    }
    return str ;
}

string FindAndReplace(string str , string s1 , string s2 , string check = "nomatch")
{
    vector<string> vstr = split(str," ");
    for ( string &s : vstr)
    {
        if (check == "nomatch")
        {
            if (toolower(s) == toolower(s1) )
            {
                s = s2 ; 
            }
        }
        else if ( s == s1 )
        {
            s = s2 ; 
        }
    }
    return Join(vstr," ") ; 
}
int main()
{
    string s1 = "malk a yahya hanya a yahya" ; 
    cout<< "Original string : " << s1 << endl ; 
    cout<< "Replace With match case : " << FindAndReplace(s1,"Yahya","simo" ,"match") << endl ; 
    cout<< "Replace With don't match case : " << FindAndReplace(s1,"Yahya","simo") << endl ; 
}