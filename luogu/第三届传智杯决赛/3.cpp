#include<bits/stdc++.h>
using namespace std;

int T,n,m;
const int N=500510;
char a1[N],b1[N];
vector<int> ans;

int check(char a[N],char b[N])
{
    int r=0,l=0;
    int cnt=0;
    int head=0;
    while(l<m)
    {

        if(a[r]==b[l]||a[r]+32==b[l]||a[r]==b[l]+32)
        {
            if(r==n-1)
            {
                cnt++;
                r=0;
                head++;
                l=head;
            }
            else
            {
                r++;
                l++;
            }

        }
        else
        {
            head++;
            r=0;
            l=head;
        }

    }
    return cnt;
}
int main()
{
    cin>>T;
    while(T--)
    {
        cin>>n>>m;
        for(int i=0;i<n;i++) cin>>a1[i];
        for(int i=0;i<m;i++) cin>>b1[i];
        ans.push_back(check(a1,b1));
    }
    for(auto i:ans) cout<<i<<endl;
    return 0;
}
