#include<iostream>
#include<vector>
#include<fstream>

using namespace std ; 


typedef struct sdata
{
    string AccountNumber ;
    string PinCode ; 
    string Name ;
    string PhoneNumber ; 
    string AccountBalance ;
    bool Update = false ;
} tdata ;

tdata ReadData()
{
    tdata data ; 
    cout << "AccountNumber : " ;
    getline(cin>>ws , data.AccountNumber) ; 
    cout << "PinCode : " ;
    getline(cin>>ws , data.PinCode) ; 
    cout << "Name : " ;
    getline(cin>>ws , data.Name) ; 
    cout << "PhoneNumber : " ;
    getline(cin>>ws , data.PhoneNumber) ; 
    cout << "AccountBalance : " ;
    getline(cin>>ws , data.AccountBalance) ; 
    
    return data ; 
}
tdata ReadDataForUpdate(string AccNumber)
{
    tdata data ; 
    data.AccountNumber = AccNumber ;
    cout << "PinCode : " ;
    getline(cin>>ws , data.PinCode) ; 
    cout << "Name : " ;
    getline(cin>>ws , data.Name) ; 
    cout << "PhoneNumber : " ;
    getline(cin>>ws , data.PhoneNumber) ; 
    cout << "AccountBalance : " ;
    getline(cin>>ws , data.AccountBalance) ; 
    
    return data ; 
}

string tooLower(string str)
{
    for (char &c : str)
    {
        c = tolower(c) ; 
    }
    return str ; 
}

vector<tdata> ReadClients()
{
    vector<tdata> data ; 
    string Check ;
    tdata d ;
    cout << "Enter data Client : " << endl ;
    do
    {
        data.push_back(ReadData()) ;
        cout << "Add is Successfully, Do you want to add more client ? (yes/no) : " ;
        cin >> Check ;
    } while (tooLower(Check) == "yes") ;

    return data ; 
}

void PrintData(tdata data)
{
    cout << "AccountNumber : " << data.AccountNumber << endl ;
    cout << "PinCode : " << data.PinCode << endl ;
    cout << "Name : " << data.Name << endl ;
    cout << "PhoneNumber : " << data.PhoneNumber << endl ;
    cout << "AccountBalance : " << data.AccountBalance << endl ;
}

vector<string> ConvertDataToVector(tdata data)
{
    vector<string> vstr ;
    vstr.push_back(data.AccountNumber) ;
    vstr.push_back("#//#") ; 
    vstr.push_back(data.PinCode) ;
    vstr.push_back("#//#") ; 
    vstr.push_back(data.Name) ;
    vstr.push_back("#//#") ; 
    vstr.push_back(data.PhoneNumber) ;
    vstr.push_back("#//#") ; 
    vstr.push_back(data.AccountBalance) ;

    return vstr ;
}


string ConvertVectorToString(vector<string> vstr)
{
    string str ;
    vector<string>::iterator it = vstr.begin() ; 
    while ( it != vstr.end())
    {
        str = str + *it ;
        it++ ; 
    }
    return str ;
}


void PrintData(vector<tdata> vdata)
{

    string data ; 
    for ( tdata &d : vdata)
    {
        cout << ConvertVectorToString(ConvertDataToVector(d)) << endl ; 
    }
}

void ConvertToFile(string NameFile ,string data)
{
    fstream MyFile ; 
    MyFile.open(NameFile,ios::out | ios::app) ;
    if ( MyFile.is_open())
    {
        MyFile << data << endl ;
    }
    MyFile.close() ; 
}


void ConvertDataToFile(string NameFile ,vector<tdata> vdata)
{
    string data  ; 

    for ( tdata &d : vdata)
    {
        data = ConvertVectorToString(ConvertDataToVector(d)) ; 
        ConvertToFile("yahya",data) ; 
    }
}

vector<string> Split(string str)
{
    vector<string> vstr;
    string data ;
    int pos= 0 ; 
    while ((pos = str.find("#//#")) != std::string::npos)
    {
        data = str.substr(0,pos) ;
        if ( data != "" )
            vstr.push_back(data) ; 
        str = str.erase(0,pos + 4) ;
    }
    if ( str != "")
        vstr.push_back(str) ; 
    
        return vstr ;
}

tdata ConvertStringToData(string str)
{
    vector<string> vstr = Split(str) ;
    tdata tdata ; 
    tdata.AccountNumber = vstr[0] ;
    tdata.PinCode = vstr[1] ;
    tdata.Name = vstr[2] ;
    tdata.PhoneNumber = vstr[3] ;
    tdata.AccountBalance = vstr[4] ;

    return tdata ;
}

vector<tdata> ReadDataFromFile(string NameFile)
{
    vector<tdata> vtdata ; 
    string data ;
    fstream MyFile ; 
    MyFile.open(NameFile,ios::in) ; 

    if (MyFile.is_open())
    {
        while(getline(MyFile,data)) 
        {
            vtdata.push_back(ConvertStringToData(data)) ; 
        }
        MyFile.close() ; 
    }
    return vtdata ; 
}

void Printt(tdata data)
{
    cout << "|  "<< setw(20) << data.AccountNumber ;
    cout << "|  "<< setw(15) << data.PinCode  ;
    cout << "|  "<< setw(30) << data.Name ;
    cout << "|  "<< setw(15) << data.PhoneNumber ;
    cout << "|  "<< setw(15) << data.AccountBalance ;
}
void PrinttAll(vector<tdata> vtdata)
{
    for ( tdata &data : vtdata)
    {
        Printt(data) ; 
        cout << endl ;
    }
}

void PrintHeader(vector<tdata> vtdata)
{
    cout << "\t\t\t\t\t\tClient List (" << vtdata.size() << ") Client(s)" << "\t\t\t\t\t\t" << endl ;
    cout << "\n--------------------------------------------------------------------------------------------------";
    cout << "------------------------------------------------------------------------------------------\n" ;
    cout << "|  " << left << setw(20) << "AccountNumber" ;
    cout << "|  " << left << setw(15) << "PinCod" ;
    cout << "|  " << left << setw(30) << "Name" ;
    cout << "|  " << left << setw(15) << "PhoneNumber" ;
    cout << "|  " << left << setw(15) << "AccountBalance" ;
    cout << "\n--------------------------------------------------------------------------------------------------";
    cout << "------------------------------------------------------------------------------------------\n" ;    
    PrinttAll(vtdata) ; 
    cout << "\n--------------------------------------------------------------------------------------------------";
    cout << "------------------------------------------------------------------------------------------\n" ;  
}

string ReadAcNumber()
{
    string AcNumber ;
    cout << "Enter The AccNumber of the client : " ;
    cin >> AcNumber ;

    return AcNumber ; 
}

void FindClientByNumberAccount(vector<tdata> vtdata )
{
    string AcNumber = ReadAcNumber() ;
    for ( tdata data : vtdata )
    {
        if ( data.AccountNumber == AcNumber )
        {
            cout << "The info is : " << endl ;
            PrintData(data) ;
            return ;
        }
    }
    cout << "The clinet Not found!" << endl ;
}

void DeleteAccount(string FileName , vector<tdata> vtdata , tdata data)
{
    fstream MyFile ;
    MyFile.open(FileName,ios::out) ;
    if (MyFile.is_open())
    {
        for (tdata &d : vtdata )
        {
            if ( d.AccountNumber != data.AccountNumber )
            {
                MyFile << (ConvertVectorToString(ConvertDataToVector(d))) << endl;
            }
        }
        MyFile.close() ;
    }
}
void DeleteClientByNumberAccount(string FileName , vector<tdata> vtdata)
{
    string AcNumber = ReadAcNumber() ;
    string Check ;
    for ( tdata data : vtdata )
    {
        if ( data.AccountNumber == AcNumber )
        {
            cout << "The info is : " << endl ;
            PrintData(data) ;
            cout << "Are you sure to delete this client account ? (yes/no) : " ;
            cin >> Check ; 
            if ( tooLower(Check) == "yes")
            {
                DeleteAccount(FileName ,vtdata , data) ; 
                cout << "The Client accont deleted successfuly ." << endl ;
            }
            return ;
        }
    }
    cout << "The clinet Not found!" << endl ;
}   

void UpdateAccount(string FileName , vector<tdata> vtdata , tdata data)
{
    fstream MyFile ;
    MyFile.open(FileName,ios::out) ;
    if (MyFile.is_open())
    {
        for (tdata &d : vtdata )
        {
            if ( d.Update == true )
            {
                MyFile << (ConvertVectorToString(ConvertDataToVector(data))) << endl;
            }
            else 
                MyFile << (ConvertVectorToString(ConvertDataToVector(d))) << endl;
        }
        MyFile.close() ;
    }
}

void FindClientForUpdate(vector<tdata> &vtdata , string AcNumber)
{
    for ( tdata &data : vtdata )
    {
        if ( data.AccountNumber == AcNumber )
        {
            data.Update = true ;
        }
    }
    cout << "The clinet Not found!" << endl ;
}

void UpdateClientByNumberAccount(string FileName , vector<tdata> vtdata)
{
    string AcNumber = ReadAcNumber() ;
    string Check ;
    for ( tdata data : vtdata )
    {
        if ( data.AccountNumber == AcNumber )
        {
            cout << "The info is : " << endl ;
            PrintData(data) ;
            cout << "Are you sure to Update this client account ? (yes/no) : " ;
            cin >> Check ; 
            if ( tooLower(Check) == "yes")
            {
                FindClientForUpdate(vtdata , AcNumber) ;
                UpdateAccount(FileName ,vtdata , ReadDataForUpdate(AcNumber)) ; 
                cout << "The Client accont  Ubdate successfuly ." << endl ;
            }
            return ;
        }
    }
    cout << "The clinet Not found!" << endl ;
}

int main()
{
    vector<tdata> vtdata = ReadDataFromFile("yahya") ; 
    PrintHeader(vtdata) ; 
    UpdateClientByNumberAccount("yahya" , vtdata) ;
}