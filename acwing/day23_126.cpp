#include <bits/stdc++.h>

using namespace std;

const int N = 110;

int n;
int g[N][N];

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i ++ )
        for (int j = 1; j <= n; j ++ )
        {
            cin >> g[i][j];
            g[i][j] += g[i - 1][j];
        }

    int res = INT_MIN;
    for (int i = 1; i <= n; i ++ )
        for (int j = i; j <= n; j ++ )
        {
            int last = 0;
            for (int k = 1; k <= n; k ++ )
            {
                last = max(last, 0) + g[j][k] - g[i - 1][k];
                res = max(res, last);
            }
        }

    cout << res << endl;
    return 0;
}
