#include<bits/stdc++.h>
using namespace std;

int n,d,cnt=0;

int main()
{
    cin>>n>>d;
    if(n==1)
    {
        cout<<"0"<<endl;
        return 0;
    }
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<n;i++)
    {
        if(a[i]<=a[i-1])
        {
            int u=a[i-1]-a[i];
            u=u/d;
            a[i]+=d*(u+1);
            cnt+=u+1;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
