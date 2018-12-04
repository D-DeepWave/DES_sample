#include "DES.h"
#include "BASE.h"
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "FEDCBA9876543210";
    string p = "0123456789ABCDEF";
   //cout<<bitset<sizeof(int)>(10)<<endl;
    DES d(p);
    cout<<d.encryption(s)<<endl;
    system("pause");
    return 0;
}