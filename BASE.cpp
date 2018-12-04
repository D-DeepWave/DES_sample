#include "BASE.h"

map<char, string> HTB;
map<string, char> BTH;


string SHexToSBin(string s)
{
    string res = "";
    HTB['0'] = "0000";
    HTB['1'] = "0001";
    HTB['2'] = "0010";
    HTB['3'] = "0011";
    HTB['4'] = "0100";
    HTB['5'] = "0101";
    HTB['6'] = "0110";
    HTB['7'] = "0111";
    HTB['8'] = "1000";
    HTB['9'] = "1001";
    HTB['a'] = "1010";
    HTB['b'] = "1011";
    HTB['c'] = "1100";
    HTB['d'] = "1101";
    HTB['e'] = "1110";
    HTB['f'] = "1111";
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (int i = 0; i < s.size(); i++)
        res += HTB[s[i]];
    return res;
}

string SBinToSHex(string s)
{
    string res = "";
    BTH["0000"] = '0';
    BTH["0001"] = '1';
    BTH["0010"] = '2';
    BTH["0011"] = '3';
    BTH["0100"] = '4';
    BTH["0101"] = '5';
    BTH["0110"] = '6';
    BTH["0111"] = '7';
    BTH["1000"] = '8';
    BTH["1001"] = '9';
    BTH["1010"] = 'a';
    BTH["1011"] = 'b';
    BTH["1100"] = 'c';
    BTH["1101"] = 'd';
    BTH["1110"] = 'e';
    BTH["1111"] = 'f';
   
    for (int i = 0; i < s.size(); i+=4)
       {
           string t = s.substr(i,4);
           res+=BTH[t];
       }

    transform(res.begin(), res.end(), res.begin(), ::toupper);
    return res;
}

string XOR(string a,string b)
{
    for(int i = 0;i<a.size();i++)
    {
        int x = a[i]-'0';
        int y = b[i]-'0';
        a[i]='0'+(x^y);
    }
    return a;
}