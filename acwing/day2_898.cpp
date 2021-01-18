#include<bits/stdc++.h>
using namespace std;

const int N = 510;
int main()
{
    int n=0;
    cin>>n;
    int a[N][N];
    for(int i=1; i<=n; i++)
        for(int j=1; j<=i; j++)
            cin>>a[i][j];
    for(int i=n-1; i; i--)
    {
        for(int j=1; j<=i; j++)
        {
            a[i][j]+=max(a[i+1][j],a[i+1][j+1]);
        }
    }
    cout<<a[1][1];
    return 0;
}
