#include<bits/stdc++.h>
using namespace std;

int n;
int cnt,ans=0;
int a[3];

int main()
{
    cin>>n;
    while(n--)
    {
        cin>>a[0]>>a[1]>>a[2];
        cnt=0;
        for(int i=0;i<3;i++)
        {
            if(a[i]==1) cnt++;
        }
        if(cnt>=2) ans++;
    }
    cout<<ans<<endl;
    return 0;
}
