#include <bits/stdc++.h>

using namespace std;

const int N = 15;

int n;
bool col[N], d[N * 2], ud[N * 2];
int ans, path[N];

void dfs(int x)
{
    if (x > n)
    {
        ans ++ ;
        if (ans <= 3)
        {
            for (int i = 1; i <= n; i ++ ) cout << path[i] << ' ';
            cout << endl;
        }
        return;
    }

    for (int y = 1; y <= n; y ++ )
        if (!col[y] && !d[x + y] && !ud[x - y + n])
        {
            col[y] = d[x + y] = ud[x - y + n] = true;
            path[x] = y;
            dfs(x + 1);
            col[y] = d[x + y] = ud[x - y + n] = false;
        }
}

int main()
{
    cin >> n;
    dfs(1);
    cout << ans << endl;
    return 0;
}