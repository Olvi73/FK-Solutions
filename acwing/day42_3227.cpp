#include<bits/stdc++.h>
using namespace std;

int n;
int a[1010];

int main()
{
    cin>>n;
    if(n<3) 
    {
        puts("0");
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int b,c=0;
    b=a[0];
    int cnt=0;
    for(int i=1;i<n-1;i++)
    {
        c=a[i+1];
        if(a[i]>b&&a[i]>c) cnt++;
        if(a[i]<b&&a[i]<c) cnt++;
        b=a[i];
    }
    cout<<cnt<<endl;
    return 0;
}