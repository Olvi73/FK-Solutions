#include <bits/stdc++.h>
using namespace std;
string s,t;
void swap(int i)
{
    s[i]= s[i]=='*'?'o':'*';
}

int main()
{
    int res=0;
    cin>>s>>t;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=t[i])
        {
            res++;
            swap(i),swap(i+1);
        }
    }
    cout<<res;
    return 0;
}
