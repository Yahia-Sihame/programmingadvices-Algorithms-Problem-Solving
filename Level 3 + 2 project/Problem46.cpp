#include<iostream>
#include<vector>

using namespace std ; 


typedef struct sdata
{
    string Number ; 
    string Pincode ; 
    string Name ; 
    string Phone ; 
    string Balance ;
}   tdata ;

tdata ReadData()
{
    tdata data ;
    cout << "Account Number : " ;
    cin >> data.Number ; 
    cout << "Pin code : " ;
    getline(cin , data.Pincode ) ; 
    getline(cin , data.Pincode ) ; 
    cout << "Name : " ;
    getline(cin , data.Name ) ; 
    cout << "Phone Number : " ;
    cin >> data.Phone ; 
    cout << "Account Balance : " ;
    cin >> data.Balance ;
    return data ;  
}
void PrintData(tdata data)
{
    cout << "Account Number :" << data.Number << endl ;
    cout << "Pin code : " << data.Pincode << endl; 
    cout << "Name : " << data.Name << endl ; 
    cout << "Phone Number : " << data.Phone << endl ; 
    cout << "Account Balance : " << data.Balance << endl ; 
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
tdata ConverStringToStruct(string str , string del)
{
    vector<string> vstr = split(str,"#//#") ; 
    tdata data ;
    data.Number = vstr[0] ;
    data.Pincode = vstr[1] ;
    data.Name = vstr[2] ;
    data.Phone = vstr[3] ;
    data.Balance = vstr[4] ;
    return data ; 
}
string Addsep(vector<string> vstr )
{
    string str = " " ;
    vector<string>::iterator it = vstr.begin() ; 
    while ( it != vstr.end() )
    {
        str = str + *it ; 
        if ( (it+1) != vstr.end() )
            str = str + "#//#" ; 
        it++ ; 
    }
    return str ; 
}

string ConverDataToLine(tdata data)
{
    vector<string> vdata ; 
    vdata.push_back(data.Number) ; 
    vdata.push_back(data.Pincode) ; 
    vdata.push_back(data.Name) ; 
    vdata.push_back(data.Phone) ; 
    vdata.push_back(data.Balance) ; 
    return Addsep(vdata) ;
}

int main()
{
    string str = "A150#//#1234#//#yahya sihame#//#0618154979#//#5000" ; 
    cout << "Line Record is : " << endl ; 
    cout << str << endl ;
    tdata data  = ConverStringToStruct(str,"#//#") ;
    cout << "Clien Record for seving is :" << endl ;
    PrintData(data) ; 

}