#include<bits/stdc++.h>
using namespace std;

const int N=110;
int n;
int h[N];
int f[N], g[N];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)    scanf("%d",&h[i]);
    
    for (int i = 1; i <= n; i ++ )
    {
        f[i] = 1;
        for (int j = 1; j < i; j ++ )
            if (h[j] < h[i])
                f[i] = max(f[i], f[j] + 1);
    }

    for (int i = n; i; i -- )
    {
        g[i] = 1;
        for (int j = n; j > i; j -- )
            if (h[j] < h[i])
                g[i] = max(g[i], g[j] + 1);
    }

    int res = 0;
    for (int i = 1; i <= n; i ++ ) res = max(res, f[i] + g[i] - 1);

    printf("%d\n", n - res);
    
    return 0;
}