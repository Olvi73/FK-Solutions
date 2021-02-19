#include<bits/stdc++.h>
using namespace std;

int n;
int a[1010];

int main()
{
    cin>>n;
    int ans=0;
    cin>>a[0];
    int b=a[0];
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        int cur=abs(a[i]-b);
        ans=cur>ans?cur:ans;
        b=a[i];
    }
    cout<<ans;
}
