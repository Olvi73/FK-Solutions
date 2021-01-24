#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
const int N = 30, M = 10010;

int n, m;
LL f[M];

int main()
{
    cin >> n >> m;
    f[0] = 1;
    for (int i = 1; i <= n; i ++ )
    {
        int v;
        cin >> v;
        for (int j = v; j <= m; j ++ )
            f[j] = f[j] + f[j - v];
    }
    cout << f[m] << endl;
    return 0;
}

