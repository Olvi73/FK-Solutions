#include<bits/stdc++.h>
using namespace std;

int n,m;
int w[100010];
bool check(double mid)
{
    int cnt=0;
    for(int i=0;i<n;i++)
            cnt+=w[i]/mid;
    return cnt>=m;
}
int main()
{

    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>w[i];
    double l=0,r=1e9;
    while(r-l>1e-4)
    {
        double mid=(l+r)/2;
        if(check(mid)) l=mid;
        else r=mid;
    }
    printf("%.2lf",r);
    return 0;
}
