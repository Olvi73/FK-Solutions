#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int getCnt(LL n,LL prefix)
{
    LL cnt=0;
    for(LL first=prefix,second=prefix+1;first<=n;first*=10,second*=10)
    {
        cout<<"first:"<<first<<" second:"<<second<<endl;
        cnt+=min(n+1,second)-first;
        cout<<"getCnt:"<<cnt<<endl;
    }
    return cnt;
}
int findKthNumber(int n, int k) {
    int prefix=1;
    k--;
    while(k>0)
    {
        int cnt=getCnt(n,prefix);
        cout<<"final_getCnt:"<<cnt<<endl;
        if(cnt<=k)
        {
            k-=cnt;
            prefix++;
        }
        else
        {
            k--;
            prefix*=10;
        }
    }
    return prefix;
}


int main()
{
    int n=100;
    int k=15;
    cout<<findKthNumber(n,k)<<endl;
}
