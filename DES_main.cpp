#include "DES.h"
#include "BASE.h"
int main()
{
    string s = "FEDCBA9876543210";
    string k = "133457799BBCDFF1";
    string p = "0123456789ABCDEF";
    string q = "0000000000000000";
    DES d(p);
    cout<<d.encryption(s)<<endl;
    system("pause");
    return 0;
}