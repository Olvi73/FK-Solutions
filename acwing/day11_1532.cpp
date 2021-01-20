#include<bits/stdc++.h>
using namespace std;

const int N=100010;
int main()
{
    int n,m;
    int a[N];
    unordered_map<int,int> mp;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    int find=0;
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        mp[a[i]]--;
        find=m-a[i];
        
        if(mp[find]>0 and find>a[i])
        {
            cout<<a[i]<<" "<<find<<endl;
            return 0;
        }
    }
    cout<<"No Solution";
    
    return 0;
}