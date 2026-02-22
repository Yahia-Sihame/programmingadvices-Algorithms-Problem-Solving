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
    cin >> data.Number ; 
    cout << "Pin code : " ;
    getline(cin >> ws, data.Pincode) ; 
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

vector<tdata> ReadFromFileToStruct(string NameFile )
{
    fstream MyFile ;
    string Line ; 
    vector<tdata> vtdata ; 
    MyFile.open(NameFile,ios::in) ;

    if ( MyFile.is_open())
    {
        while (getline(MyFile,Line))
        {
            vtdata.push_back(ConverStringToStruct(Line, "#//#")) ; 
        }
        MyFile.close() ; 
    }
    return vtdata ; 
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
void PrintData(tdata data)
{
    cout << "|  " << setw(20) << left << data.Number  ;
    cout << "|  " << setw(10) << left << data.Pincode ; 
    cout << "|  " << setw(40) << left << data.Name ; 
    cout << "|  " << setw(12) << left << data.Phone ; 
    cout << "|  " << setw(12) << left << data.Balance ; 
}
void Printt(vector<tdata> vtdata)
{
    cout << endl << "\t\t\t\t\t\t Client List (" << vtdata.size() << ") Client(s)" << "\t\t\t\t\t\t" << endl ;
    cout << "\n------------------------------------------------------------------------" ;
    cout << "------------------------------------------------------------------------\n" ;
    cout << "|  " << left << setw(20) << "Account Number  " ;
    cout << "|  " << left << setw(10) << "Pin code  " ;
    cout << "|  " << left << setw(40) << "Name  " ;
    cout << "|  " << left << setw(12) << "Phone Number  " ;
    cout << "|  " << left << setw(12) << "Account Balance  " ;
    cout << "\n------------------------------------------------------------------------" ;
    cout << "------------------------------------------------------------------------\n" ;

    for ( tdata &data : vtdata )
    {
        PrintData(data) ; 
        cout << endl ; 
    }

    cout << "\n------------------------------------------------------------------------" ;
    cout << "------------------------------------------------------------------------\n" ;
}

int main()
{
    cout << "Please enter client data : " << endl ; 
    AddClients() ;
    Printt(ReadFromFileToStruct("yahya")) ; 
}