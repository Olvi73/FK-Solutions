#include<bits/stdc++.h>
using namespace std;

long long n,m,a;


int main()
{
    cin>>n>>m>>a;
    long long ans=((m+a-1)/a)*((n+a-1)/a);
    cout<<ans<<endl;
    return 0;
}
