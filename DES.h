#ifndef _DES_H
#define _DES_H
#include"BASE.h"

class DES
{
  public:
    DES(string s);
    string I_Permutation(string s);
    string I_PermutationInverse(string s);
    string E_extend(string s);
    string S_replace(string s);
    string P_shift(string s);
    vector<string> keyGeneration(string s);
    string cylicShift(string s, int k);
    string feistel(string s,int i);
    string encryption(string k);
    vector<string>key;
    string cipherText;
    string plaintText;
};
#endif