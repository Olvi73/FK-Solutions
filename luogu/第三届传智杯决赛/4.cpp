#include<bits/stdc++.h>
using namespace std;

const int N=55;
int n,m;
int a[N],b[N],c[N];
int ac,bc,cc;

vector<int> count_n(bool t1,bool t2,bool t3)
{

    int cnt=0;
    int r=1;
    if(t3) r=3,cnt++;
    if(t2) r=2,cnt++;
    if(t1) r=1,cnt++;


    vector<int> ans;
    ans.push_back(cnt);
    ans.push_back(r);
    return ans;
}

vector<int> check(int n[N],int num,int nums,int nc)
{
    vector<int> v;
    for(int i=num;i<m;i++)
    {
        if(n[i]-nums>0)
        {
            n[i]-=nums;
            nc-=nums;
            v.push_back(num);
            v.push_back(nums);
            v.push_back(nc);
            v.push_back(1);
            return v;
        }
    }
    v.push_back(num);
    v.push_back(nums);
    v.push_back(nc);
    v.push_back(0);
    return v;

}
int play()
{
    bool t1=true,t2=true,t3=true;
    int round=1,nums=1;
    int num=1;
    while(ac&&bc&&cc)
    {

        if(round==1)
        {
            puts("tst");
            vector<int> vct;
            vct=check(a,num,nums,ac);
            num=vct[0];
            nums=vct[1];
            ac=vct[2];
            t1=vct[3]==1?true:false;
            if(num!=m) num++;
            else
            {
                num=1;
                nums++;
            }
            if(ac==0) return 1;
            round=2;

        }
        if(round==2)
        {
            vector<int> vct;
            vct=check(b,num,nums,bc);
            num=vct[0];
            nums=vct[1];
            bc=vct[2];
            t2=vct[3]==1?true:false;
            if(num!=m) num++;
            else
            {
                num=1;
                nums++;
            }
            if(bc==0) return 2;
            round=3;
        }
        if(round==3)
        {
            vector<int> vct;
            vct=check(c,num,nums,cc);
            num=vct[0];
            nums=vct[1];
            cc=vct[2];
            t3=vct[3]==1?true:false;
            if(num!=m) num++;
            else
            {
                num=1;
                nums++;
            }
            if(cc==0) return 3;
            round=1;
        }
        vector<int> v=count_n(t1,t2,t3);
        if(v[0]==1)
        {
            num=1;
            nums=1;
            round=v[1];
        }
        cout<<ac<<bc<<cc<<endl;
    }
}

int main()
{
    cin>>n>>m;
    ac=n,bc=n,cc=n;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        a[t]++;
    }
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        b[t]++;
    }
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        c[t]++;
    }

    cout<<play();

    return 0;
}
