#include<iostream>
using namespace std ; 

string ReadText()
{
    string Text ; 
    cout << "Enter Text : " ; 
    getline(cin,Text) ;

    return Text ; 
}

string EncriptText(string Text , int Encriptionkey)
{
    for ( int i = 0 ; i < Text.length() ; i++ )
    {
        Text[i] = char( (int) Text[i] + Encriptionkey ) ;
    }

    return Text ; 
}

string DecriptText(string Text , int Encriptionkey)
{
    for ( int i = 0 ; i < Text.length() ; i++ )
    {
        Text[i] = char( (int) Text[i] - Encriptionkey ) ;
    }

    return Text ; 
}

int main()
{
    const int EncriptionKey = 2 ; 
    string Text = ReadText() ; 

    cout << "Text Befor Encription : " << Text << endl ; 
    cout << "Text After Encription : " << EncriptText(Text , EncriptionKey) << endl ; 
    cout << "Text After Decription : " << DecriptText(EncriptText(Text , EncriptionKey) , EncriptionKey) << endl ; 


    return 0 ; 
}