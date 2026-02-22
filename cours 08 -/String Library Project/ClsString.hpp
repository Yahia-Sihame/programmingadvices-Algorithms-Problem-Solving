#pragma once 

#include<iostream>
#include<vector>
using namespace std ; 


class ClsString
{
private : 
    string _Value ; 
public :
    ClsString()
    {
        _Value = "" ;
    } 

    ClsString(string Value)
    {
        _Value = Value ; 
    }
    
    void SetString(string Value)
    {
        _Value = Value ;
    }
    string GetString()
    {
        return _Value ; 
    }

    static string StringToUpercase(string str)
    {
        int i = 0 ; 
        int test = 0 ;
        while ( str[i] )
        {
            if ( str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = (char)(str[i] - 32) ; 
            }
            i++ ; 
        }
        return str ;
    }
    string StringToUpercase()
    {
        return StringToUpercase(_Value) ; 
    }
    static string StringToLowercase(string str)
    {
        int i = 0 ; 
        int test = 0 ;
        while ( str[i] )
        {
            if ( str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = (char)(str[i] + 32) ; 
            }
            i++ ; 
        }
        return str ; 
    }
    string StringToLowercase()
    {
        return StringToLowercase(_Value) ; 
    }    
public :

    static string ConvertString(string str) 
    {
        int i = 0 ; 
        while ( str[i] )
        {
            str[i] = (isupper(str[i]) ? tolower(str[i]) : toupper(str[i])) ; 
            i++ ;
        }
        return str ;
    }
    string ConvertString()
    {
        return ConvertString(_Value) ;
    }
    static int CountLength(string str)
    {
        int i = 0 ; 
        while ( str[i] )
            i++ ; 
        return i ; 
    }
    int CountLength()
    {
        return CountLength(_Value) ; 
    }
    static int CountCapitalLeters(string str)
    {
        int i = 0 ; 
        int count = 0 ; 
        while ( str[i])
        {
            if (isupper(str[i]))
                count++ ; 
            i++ ; 
        }
        return count ; 
    }
    int CountCapitalLeters()
    {
        return CountCapitalLeters(_Value) ; 
    }

    static int CountSmallLeters(string str)
    {
        int i = 0 ; 
        int count = 0 ; 
        while ( str[i])
        {
            if (islower(str[i]))
                count++ ; 
            i++ ; 
        }
        return count ; 
    }
    int CountSmallLeters()
    {
        return CountSmallLeters(_Value) ; 
    }
public : 
    static int CountVowels(string str)
    {
        int i = 0 ; 
        int count = 0 ; 
        while ( str[i] )
        {
            if (( str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'))
                count++ ;
            i++ ; 
        }
        return count ; 
    }
    int CountVowels()
    {
        return CountVowels(_Value) ; 
    }
    static int CountWords(string str)
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
    int CountWords()
    {
        return CountWords(_Value) ; 
    }
    static vector<string> Split(string del , string str)
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
    vector<string> Split(string del)
    {
        return Split(del , _Value) ;
    }

    static string TrimLeft(string str )
    {
        int i = 0 ;
        while ( str[i] )
        {
            if ( str[i] != ' ' )
                return str = str.substr(i , str.length() - 1 ) ;
            i++ ; 
        }
        return "" ; 
    }
    string TrimLeft()
    {
        return TrimLeft(_Value) ; 
    }
    static string TrimRight(string str )
    {
        int i = str.length() - 1 ;
        while ( i >= 0 )
        {
            if ( str[i] != ' ' )
                return str = str.substr(0 , i +1 ) ;
            i-- ; 
        }
        return "" ; 
    }
    string TrimRight()
    {
        return TrimRight(_Value) ; 
    }
    static string Trim(string str)
    {
        return TrimLeft(TrimRight(str)) ; 
    }
    string Trim()
    {
        return Trim(_Value) ; 
    }
    static string  ReverseWords(string str)
    {
        int i = str.length() - 1 ;
        vector<string> vstr = Split(" ",str); 
        string str1 ; 
        vector<string>::iterator it = vstr.end() ; 
        while ( it != vstr.begin())
        {
            --it ; 
            str1 = str1 + *it ;
            if ( it != vstr.begin())  
                str1 = str1 + " " ; 
        }
        return str1 ; 
    }
    string  ReverseWords()
    {
        return ReverseWords(_Value) ;
    }
private : 
    string Join(vector<string> vstr , string sep)
    {
        string str ; 
        for ( string &s : vstr)
        {
            str = str + s + sep ;
        }
        return str = str.substr(0,str.length() - sep.length()) ; 
    }
public :
    string FindAndReplace(string str , string s1 , string s2)
    {
        vector<string> vstr = Split(" ",str);
        for ( string &s : vstr)
        {
            if ( s == s1 )
            {
                s = s2 ; 
            }
        }
        return Join(vstr," ") ; 
    }
    string FindAndReplace(string s1 , string s2)
    {
        return FindAndReplace(_Value , s1 , s2 );
    }
private : 
    bool IsPunctuation(char Char)
    {
        if ((Char >= 33 && Char <= 47) || (Char >= 58 && Char <= 64) || (Char >= 91 && Char <= 96) ||
            (Char >= 123 && Char <= 126))
            return true;
        else
            return false;
    }
public :
    static string RemovePunctuation(string str)
    {
        int i = 0 ; 
        string s1 = " " ; 
        while ( str [i])
        {
            if ( !((str[i] >= 33 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64) || (str[i] >= 91 && str[i] <= 96) ||
            (str[i] >= 123 && str[i] <= 126)) )
            {
                s1 = s1 + str[i] ; 
            }
            i++ ; 
        }
        return s1 ; 
    }
    string RemovePunctuation()
    {
        return RemovePunctuation(_Value) ;
    }
    
} ;