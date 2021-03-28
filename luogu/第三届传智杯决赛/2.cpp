#include<bits/stdc++.h>
using namespace std;

float n,k;
float a[1010];

int main()
{
    cin>>n>>k;
    int cnt=0;
    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=0;i<n;i++)
    {
        float temp=k/a[i];
        for(int j=i+1;j<n;j++)
        {
            if(temp>=a[j])
                cnt++;
        }
    }

    cout<<cnt;

    return 0;
}
