#include<bits/stdc++.h>
using namespace std;

const int N=100010;
int n,m;
int a[N],b[N];

int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    int cnt=0;
    for(int i=m-1,j=n-1;i>=0;i--)
    {
        if(b[i]<=a[j])
        {
            cnt++;
            j--;
        }
    }
    cout<<cnt<<endl;

    return 0;
}
