#include<iostream>
using namespace std;

int s;
int cur=0;
int p=0;

int main()
{
    while(cin>>s,s!=0)
    {
        if(s==1)
        {
            p+=1;
            cur=0;
        }
        if(s==2)
        {
            cur+=2;
            p+=cur;
        }
    }
    cout<<p<<endl;
}