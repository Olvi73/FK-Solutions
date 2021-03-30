#include<bits/stdc++.h>
using namespace std;

const int maxn=200007;
int cnt[maxn]={0};
int n;

int main()
{
    cin>>n;
    while(n--)
    {
        int m;
        cin>>m;
        for(int i=1;i<=maxn;i++) cnt[i]=0;
        for(int i=1;i<=m;i++)
        {
            int u;
            cin>>u;
            cnt[u]++;
        }
        int mx=0;
        for(int i=1;i<=m;i++) mx=max(mx,cnt[i]);

        cout<<mx<<endl;
    }
    return 0;
}
