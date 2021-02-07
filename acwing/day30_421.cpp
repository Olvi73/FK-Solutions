#include<bits/stdc++.h>
using namespace std;

int a[15];

int main()
{
    int cnt=0;
    int h=0;
    for(int i=0;i<10;i++) cin>>a[i];
    cin>>h;
    h+=30;
    for(int i=0;i<10;i++) if(h>=a[i]) cnt++;
    cout<<cnt;
}