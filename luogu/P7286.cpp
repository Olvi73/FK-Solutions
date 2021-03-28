#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
const LL N=1000010;
LL n;
LL k[N];
LL ans=0;

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++) cin>>k[i];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=i;j++)
        {
            LL maxx=0;
            if(i!=j)
            {
                LL s=i+j;
                LL minn=k[i]>k[j]?k[j]:k[i];
                maxx=max(s*minn,k[i]*i);
            }
            else
            {
                maxx=k[i]*i;
            }
            ans=max(ans,maxx);
        }
        cout<<ans<<endl;
}
