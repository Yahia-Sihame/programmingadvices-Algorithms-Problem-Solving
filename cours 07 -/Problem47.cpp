#include<iostream>
#include<vector>
#include<fstream>

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
    getline(cin>>ws , data.Number) ; 
    cout << "Pin code : " ;
    getline(cin , data.Name ) ; 
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

void SaveDataInFile(string NameFile , string data)
{
    fstream MyFile ; 
    MyFile.open("yahya",ios::out | ios::app) ;

    if (MyFile.is_open())
    {
        MyFile<< data << endl; 
        MyFile.close() ; 
    }
}

string toolower(string str)
{
    for ( char &c : str)
        c = tolower(c) ;
    return str ; 
}

void AddClients()
{
    string check ; 
    tdata data ;
    do
    {
        data = ReadData() ;
        SaveDataInFile("yahya",ConverDataToLine(data)) ;
        cout << "Client added succesfully, do you want to add more clients ? (yes/no) : " ;
        cin >> check ; 
    } while (toolower(check) == "yes") ;

}

int main()
{
    cout << "Please enter client data : " << endl ; 
    AddClients() ;
}