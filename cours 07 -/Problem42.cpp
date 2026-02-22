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

string FindAndReplace(string str , string s1 , string s2)
{
    vector<string> vstr = split(str," ");
    for ( string &s : vstr)
    {
        if ( s == s1 )
        {
            s = s2 ; 
        }
    }
    return Join(vstr," ") ; 
}
/*string FindAndReplace(string str , string s1 , string s2)
{
    int i  = str.find(s1) ; 
    while ( i != std::string::npos )
    {
        str = str.replace(i,s1.length(),s2) ;
        i = str.find(s1) ; 
    }
    return str ;

}*/
int main()
{
    string s1 = "malk a yahya hanya a yahya" ; 
    cout<< "Befor : " << s1 << endl ; 
    cout<< "After : " << FindAndReplace(s1,"yahya","simo") << endl ; 
}