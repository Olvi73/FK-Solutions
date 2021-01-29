#include<iostream>
using namespace std;

const int N=10010;
bool a[N];
int l,m;
int lp,rp;
void init(int l)
{
    for(int i=0;i<=l;i++)
    a[i]=true;
}
int main()
{
    cin>>l>>m;
    init(l);
    int res=0;
    while(cin>>lp>>rp)
    {
        for(int i=lp;i<=rp;i++)
        {
            a[i]=false;
        }
    }
    for(int i=0;i<=l;i++)
    {
        if(a[i]==true)
        res++;
    }
    cout<<res;
    return 0;
}