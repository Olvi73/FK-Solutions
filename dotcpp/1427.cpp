#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int f[100000]={0};
    int cnt=0;
    f[n]=1,f[m]=1;
    int i;
    for(i=1;cnt<10000;i++)
        if(f[i]) f[i+n]=1,f[i+m]=1,cnt++;
        else cnt=0;
    cout<<i-10000-1<<endl;
    return 0;
}
