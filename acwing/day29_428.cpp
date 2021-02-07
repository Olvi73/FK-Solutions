#include <iostream>
#include <algorithm>

using namespace std;

typedef long long LL;

LL get(int a, int b)
{
    LL res = 1;
    while (b -- ) res *= a;
    return res;
}

int main()
{
    int n, k;
    cin >> k >> n;

    LL res = 0;
    for (int i = 0; i < 20; i ++ )
        if (n >> i & 1)
            res += get(k, i);

    cout << res << endl;

    return 0;
}