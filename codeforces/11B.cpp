#include<bits/stdc++.h>
using namespace std;

int x,ans=0;

int main()
{
    cin>>x;
    if(x<0) x=-x;
    for(int i=1,t=1;x&&!ans;++i,t+=i)
        if(t==x||(t>x&&!((t-x)%2))) ans=i;
    cout<<ans<<endl;
}
