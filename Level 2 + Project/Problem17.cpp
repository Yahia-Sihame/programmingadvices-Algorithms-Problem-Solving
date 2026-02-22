#include<iostream>
using namespace std ; 

string ReadPaseword()
{
    string Password ; 
    cout <<"Enter your password : " ;
    cin >> Password ; 

    return Password ; 
}
bool PrintResults()
{
    string Password = ReadPaseword() ; 
    int Count = 0 ; 
    string word = "" ; 
    for (int i = 65 ; i <= 90 ; i++)
    {
        for (int j = 65 ; j <= 90 ; j++)
        {
            for (int k = 65 ; k <= 90 ; k++)
            {
                word = char(i)  ; 
                word = word + char(j) ;
                word = word + char(k) ;
                cout << "Trial["<<++Count<<"] = " << word << endl ; 
                if ( Password == word )
                {
                    cout << "Password is  "<<word << endl ;
                    cout << "Found after "<<Count<< " Trial ." <<endl; 
                    return true ;
                }

                word = "" ; 
                
            }
        }
    }
}

int main()
{
    PrintResults() ; 

    return 0 ; 
}