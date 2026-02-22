#include<iostream>
using namespace std ; 


string ReadString()
{
    string str ; 
    cout << "Please Enter your string : " ; 
    getline(cin,str) ; 
    return str ; 
}

char ReadChar()
{
    char c ;
    cout << "Please Enter a char : " ; 
    cin >> c ;
    return c ; 
}

int CountWords(string str)
{
    int i = 0 ;
    int test = 0; 
    int count = 0 ; 
    while ( str[i] )
    {
        if ( str[i] == ' ' )
            test = 0 ; 
        if ( test == 0 && str[i] != ' ' )
        {
            test = 1 ;
            count++ ; 
        }
        i++ ; 
    }
    return count ; 
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

void PrintVector(vector<string> vstr)
{
    int i = 0 ; 
    while ( i < vstr.size())
    {
        cout << vstr[i] << endl ; 
        i++ ; 
    }
}

void PrintVector2(vector<string> vstr)
{
    for ( string &s : vstr)
    {
        cout << s << endl ; 
    }
}

int main()
{
    string str = ReadString() ; 
    vector<string> vstring ; 
    vstring = split(str , " ") ; 
    int Token = vstring.size() ; 
    
    cout << "Tokens = " << Token << endl ; 
    PrintVector2(vstring) ; 
}