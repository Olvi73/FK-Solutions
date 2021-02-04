#include <iostream>

using namespace std;

typedef long long LL;

int qmi(int a, int b, int p)
{
    int res = 1 % p; //模为1时 res=0
    while (b)
    {
        if (b & 1) res = (LL)res * a % p; //&与运算 b&1==0 偶数 / b&1==1奇数
        a = (LL)a * a % p;
        b >>= 1;
    }
    return res;
}

int main()
{
    int a, b, p;
    cin >> a >> b >> p;
    cout << qmi(a, b, p) << endl;
    return 0;
}