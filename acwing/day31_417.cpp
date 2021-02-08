#include<iostream>
using namespace std;

const int N=15;
int s[N],m[N];
int value,day=0;

int main()
{
    for(int i=1;i<=7;i++)
    {
        cin>>s[i]>>m[i];
        m[i]+=s[i];
        if(m[i]>8) 
        {
            if(value<m[i]-8)
            {
                value=m[i]-8;
                day=i;
            }
        }
    }
    cout<<day<<endl;
    return 0;
}