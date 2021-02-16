#include<bits/stdc++.h>
using namespace std;

const int N=510;
int q[N][N];
int n;

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>q[i][j];
    for (int i = 2; i <= n * 2; i ++ )
    {
        if (i % 2)
        {
            for (int j = 1; j <= i; j ++ )
                if (j >= 1 && j <= n && i - j >= 1 && i - j <= n)
                    printf("%d ", q[j][i - j]);
        }
        else
        {
            for (int j = i; j; j -- )
                if (j >= 1 && j <= n && i - j >= 1 && i - j <= n)
                    printf("%d ", q[j][i - j]);
        }
    }
    return 0;
}