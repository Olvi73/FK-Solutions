#include<bits/stdc++.h>
using namespace std;

string s;
int n=1;
int summ=0;
char c='X';

int main()
{
    cin>>s;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='-'&&n<10)
        {
            summ+=(s[i]-'0')*n;
            n++;
        }
    }
    summ%=11;
    if(summ<10) c='0'+summ;

    if(c==s.back()) puts("Right");
    else
    {
        s.back()=c;
        cout<<s<<endl;
    }
    return 0;
}
