#include<bits/stdc++.h>
using namespace std;

const int N=30;
int n,m;
int a[N];
int t;

int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        a[t]++;
    }
    for(int i=0;i<m;i++)
    {
        cin>>t;
        a[t]++;
    }
    int cnt=0;
    for(int i=0;i<25;i++)
    {
        if(a[i]>=2) cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}
