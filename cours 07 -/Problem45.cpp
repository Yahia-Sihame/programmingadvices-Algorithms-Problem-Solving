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
    getline(cin , data.Name ) ; 
    getline(cin , data.Pincode ) ; 
    cout << "Name : " ;
    getline(cin , data.Name ) ; 
    cout << "Phone Number : " ;
    cin >> data.Phone ; 
    cout << "Account Balance : " ;
    cin >> data.Balance ;
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
    tdata data ;
    cout << "Please enter client data : " << endl ; 
    data = ReadData() ; 
    cout << "Clien Record for seving is :" << endl ;
    cout << ConverDataToLine(data) ; 

}