#include<bits/stdc++.h>
using namespace std;

string s;
int ans=0;
int a[26];

void check(int x,int y)
{
    memset(a,0,sizeof(a));
    for(int i=x;i<=y;i++)
    {
        if(a[s[i]-'a']==0)
        {
            a[s[i]-'a']++;
            ans++;
        }

    }

}

int main()
{
    cin>>s;
    int len=s.length();
    for(int i=0;i<len;i++)
        for(int j=i;j<len;j++)
        {
            check(i,j);
        }
    cout<<ans<<endl;
    return 0;
}
