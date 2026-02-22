#include<iostream>
#include<vector>
#include<string>
#include <cstdlib>
#include<iomanip>
#include<fstream>

using namespace std ;

enum enchoise{Show = 1 , Add = 2 , Delete = 3 , Update = 4 , Find = 5 , Exit = 6} ; 

typedef struct tdata
{
    string AccountNumber ;
    string PinCode ; 
    string Name ;
    string PhoneNumber ; 
    string AccountBalance ;
    bool Update = false ;
    bool Delete = false ;
} vdata ;

string TooLower(string str)
{
    for ( char &c : str)
    {
        c = tolower(c) ; 
    }
    return str ;
}

void ShowMainMenue()

{
    system("clear"); 
    cout << "\n===============================================================================\n" ;
    cout << "                                 Main Menue screen                             " ; 
    cout << "\n===============================================================================\n" ;
    cout << "\t\t [1] Show Client List ." << endl ;
    cout << "\t\t [2] Add new Client ." << endl ;
    cout << "\t\t [3] Delete Client ." << endl ;
    cout << "\t\t [4] Update Clien ." << endl ;
    cout << "\t\t [5] Find Client ." << endl ;
    cout << "\t\t [6] Exit ." << endl ;
    cout << "===============================================================================\n" ;

}

vector<string> Split(string str , string sep)
{
    vector<string> vstr ; 
    string data ;
    int pos = 0 ;
    while ( (pos = str.find(sep)) != std::string::npos)
    {
        data = str.substr(0,pos) ;
        vstr.push_back(data) ;
        str = str.erase(0,pos + sep.length()) ; 
    }
    if ( str != "")
        vstr.push_back(str) ; 
    
        return vstr ; 
}

tdata ConvertStringToData(string str)
{
    tdata data ; 
    vector <string> vstr = Split(str , "#//#") ;
    data.AccountNumber =vstr[0] ; 
    data.PinCode =vstr[1] ; 
    data.Name =vstr[2] ; 
    data.PhoneNumber =vstr[3] ; 
    data.AccountBalance =vstr[4] ; 

    return data ; 
}

vector<tdata> ReadDataFromFile(string NameFile = "yahya")
{
    vector<tdata> vtdata ; 
    fstream MyFile ;
    string data ; 
    MyFile.open(NameFile,ios::in) ; 

    if ( MyFile.is_open() )
    {
        while(std::getline(MyFile,data))
        {
            vtdata.push_back(ConvertStringToData(data)) ;
        }
        MyFile.close() ;
    }
    return vtdata ;
}

void PrintFormdata(tdata data)
{
    cout << "|  "<< setw(20) << data.AccountNumber ;
    cout << "|  "<< setw(15) << data.PinCode  ;
    cout << "|  "<< setw(30) << data.Name ;
    cout << "|  "<< setw(15) << data.PhoneNumber ;
    cout << "|  "<< setw(15) << data.AccountBalance ;
}

void PrinttAllData(vector<tdata> vtdata)
{
    for ( tdata &data : vtdata)
    {
        PrintFormdata(data) ; 
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
    PrinttAllData(vtdata) ; 
    cout << "\n--------------------------------------------------------------------------------------------------";
    cout << "------------------------------------------------------------------------------------------\n" ;  
}

void AddClientMenu()
{
    cout << "\n===============================================================================\n" ;
    cout << "                                 Add new client screen                           " ; 
    cout << "\n===============================================================================\n" ;
    cout << "Adding new client :" << endl ;
}

bool CheckClientIsExist(vector<tdata> vtdata , string AccNumber)
{
    for (tdata &data : vtdata)
    {
        if (data.AccountNumber == AccNumber )
            return true ;
    }
    return false ;
}

bool CheckClientIsExistAndDeleted(vector<tdata> vtdata , string AccNumber)
{
    for (tdata &data : vtdata)
    {
        if (data.AccountNumber == AccNumber )
            return true ;
    }
    return false ;
}

tdata ReadDataToAddAccountAndUpdate(string AccNumber)
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

string ConvertDataToString(tdata data , string sep)
{
    string str ; 
    str = str + data.AccountNumber + sep ; 
    str = str + data.PinCode + sep ; 
    str = str + data.Name + sep ; 
    str = str + data.PhoneNumber + sep ; 
    str = str + data.AccountBalance ; 

    return str ;
}

void AddDataToFile(string FileName , tdata data)
{
    fstream MyFile ; 
    MyFile.open(FileName,ios::out | ios::app) ;
    if ( MyFile.is_open())
    {
        MyFile << ConvertDataToString(data,"#//#") << endl ;
        MyFile.close() ; 
    }
}

void AddClientInfo()
{
    vector<tdata> vtdata = ReadDataFromFile() ;
    string AccNumber ;
    string Check ;

    tdata data ; 
    do 
    {
        cout << "Enter Account Number : " ;
        cin >> AccNumber ;
        while (CheckClientIsExist(vtdata,AccNumber))
        {
            cout << "Client with Account Number [" << AccNumber << "] already exists , enter another Account Number " << endl;
            cin >> AccNumber ; 
        }
        AddDataToFile("yahya",ReadDataToAddAccountAndUpdate(AccNumber)) ; 
        cout << "Client added successfully, do you want to add more client? (yes/no) : " ;
        cin >> Check ; 
    } while(TooLower(Check) == "yes") ; 
}

void PrintData(tdata data)
{
    cout << "AccountNumber : " << data.AccountNumber << endl ;
    cout << "PinCode : " << data.PinCode << endl ;
    cout << "Name : " << data.Name << endl ;
    cout << "PhoneNumber : " << data.PhoneNumber << endl ;
    cout << "AccountBalance : " << data.AccountBalance << endl ;
}

void PrintDataUsingAccNumber(vector<tdata> vtdata , string AccNumber)
{
    for(tdata &data : vtdata)
    {
        if ( data.AccountNumber == AccNumber)
        {
            PrintData(data) ; 
            return ;
        }
    }
}

void PrintDataAndMarkForDelete(vector<tdata> &vtdata , string AccNumber)
{
    for (tdata &data : vtdata)
    {
        if ( data.AccountNumber == AccNumber )
        {
            data.Delete = true ; 
            PrintData(data) ; 
            return ;
        }
    }
}

void PrintDataAndMarkForUpdate(vector<tdata> &vtdata , string AccNumber)
{
    for (tdata &data : vtdata)
    {
        if ( data.AccountNumber == AccNumber )
        {
            data.Update = true ; 
            PrintData(data) ; 
            return ;
        }
    }
}

void DeleteDataFromFile(string FileName, vector<tdata> vtdata )
{
    fstream MyFile ; 
    MyFile.open(FileName,ios::out) ; 

    if ( MyFile.is_open())
    {
        for (tdata &data : vtdata)
        {
            if ( data.Delete == false )
            {
                MyFile << ConvertDataToString(data,"#//#") << endl ;
            }
        }
    }
}

void UpdateDataFromFile(string FileName, vector<tdata> vtdata )
{
    fstream MyFile ; 
    MyFile.open(FileName,ios::out) ; 

    if ( MyFile.is_open())
    {
        for (tdata &data : vtdata)
        {
            if ( data.Update == false )
            {
                MyFile << ConvertDataToString(data,"#//#") << endl ;
            }
            else 
            {
                data = ReadDataToAddAccountAndUpdate(data.AccountNumber) ;
                MyFile << ConvertDataToString(data,"#//#") ;
            }
                
        }
    }
}

void DeletClientInfo()
{
    vector<tdata> vtdata = ReadDataFromFile() ;
    string AccNumber ;
    string Check ;

    cout << "Enter Account Number For Delete : " ;
    cin >> AccNumber ;
    
    if ( CheckClientIsExist(vtdata,AccNumber)) 
    {
        PrintDataAndMarkForDelete(vtdata , AccNumber) ;
        cout << "\nAre you sure you want to Delete this client? (yes/no) : " ; 
        cin >> Check ;
        if (TooLower(Check) == "yes")
        {
            DeleteDataFromFile("yahya",vtdata) ;
            cout << "Client Deleted Successfuly."<< endl ;
        }
    }
    else 
        cout << "Client with Account Number [" << AccNumber << "] is not found !" << endl ; 
}

void UpdateClientMenu()
{
    cout << "\n===============================================================================\n" ;
    cout << "                                 Update client screen                           " ; 
    cout << "\n===============================================================================\n" ;
}

void UpdateAccountInfo()
{
    vector<tdata> vtdata = ReadDataFromFile() ;
    string AccNumber ;
    string Check ;
    cout << "Enter Account Number For Delete : " ;
    cin >> AccNumber ;

    if ( CheckClientIsExist(vtdata,AccNumber)) 
    {
        PrintDataAndMarkForUpdate(vtdata , AccNumber) ;
        cout << "\nAre you sure you want to delete this client? (yes/no) : " ; 
        cin >> Check ;
        if (TooLower(Check) == "yes")
        {
            UpdateDataFromFile("yahya",vtdata) ;
            cout << "Client Update Successfuly."<< endl ;
        }
    }
    else 
        cout << "Client with Account Number [" << AccNumber << "] is not found !" << endl ; 
}

void DeleteClientMenu()
{
    cout << "\n===============================================================================\n" ;
    cout << "                                 Delete client screen                           " ; 
    cout << "\n===============================================================================\n" ;
}

void FindClientMenu()
{
    cout << "\n===============================================================================\n" ;
    cout << "                                 Find client screen                           " ; 
    cout << "\n===============================================================================\n" ;
}

void FindAccountInfo()
{
    vector<tdata> vtdata = ReadDataFromFile() ;
    string AccNumber ;
    string Check ;
    cout << "Enter Account Number : " ;
    cin >> AccNumber ;

    if ( CheckClientIsExist(vtdata,AccNumber)) 
    {
        PrintDataUsingAccNumber(vtdata,AccNumber) ;
    }
    else 
        cout << "Client with Account Number [" << AccNumber << "] is not found !" << endl ; 
}

void ShowClients()
{
    vector<tdata> vtdata = ReadDataFromFile() ; 
    PrintHeader(vtdata) ;
}

void AddClient()
{
    AddClientMenu() ; 
    AddClientInfo() ; 
}

void DeleteClient()
{
    DeleteClientMenu() ;
    DeletClientInfo() ;
}

void UpdateClient()
{
    UpdateClientMenu() ;
    UpdateAccountInfo() ;
}

void FindClient()
{
    FindClientMenu() ;
    FindAccountInfo() ;
}

enchoise ReadChoise()
{
    int Check ;
    cout << "Choose what do you want to do ? [1 to 6] : " ;
    cin >> Check ; 

    return static_cast<enchoise>(Check) ; 
}

void ExitMenu()
{
    system("clear"); 
    cout << "\n===============================================================================\n" ;
    cout << "                                 Programme end :-)                           " ; 
    cout << "\n===============================================================================\n" ;
}

void GoBackToMenu()
{
    string enter ;
    cout << "Press any word to go back to main menu ..." ;
    cin >> enter ; 
    if (enter[0])
        ShowMainMenue() ; 
}

void Mainn(enchoise Choise)
{
    switch (Choise)
    {
    case enchoise::Show : 
        ShowClients() ;
        GoBackToMenu() ; 
        Mainn(ReadChoise()) ;
        break;
    case enchoise::Add :
        AddClient() ;
        GoBackToMenu() ; 
        Mainn(ReadChoise()) ;
        break ;
    case enchoise::Delete :
        DeleteClient() ;
        GoBackToMenu() ; 
        Mainn(ReadChoise()) ;
        break ;
    case enchoise::Update :
        UpdateClient() ;
        GoBackToMenu() ; 
        Mainn(ReadChoise()) ;
        break ;
    case enchoise::Find :
        FindClient() ;
        GoBackToMenu() ; 
        Mainn(ReadChoise()) ;
    case enchoise::Exit :
        ExitMenu() ; 
        break ;
    default:
        cout << "Invalid choise :" ; 
        GoBackToMenu() ;
        Mainn(ReadChoise()) ; 
        break;
    }
}

void All()
{
    ShowMainMenue() ;
    Mainn(ReadChoise()) ; 
}

int main()
{
    All() ;
}