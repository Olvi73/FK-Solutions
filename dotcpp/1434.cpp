#include<iostream>
using namespace std;

int num=0,n;
int a[7];

int check(int i)
{
	s=0;
    int temp=0;
    int j=0;
    while(i!=0)
    {
        temp=i%10;
        a[j]=temp;
        j++;
        i/=10;
        s+=temp;
    }
    if(n!=s) return 0;
    for(int i=0,k=j-1;i<k;k--,i++)
    {
        if(a[i]!=a[k]) return 0;
    }
    return 1;
}

int main()
{
    cin>>n;
    int flag=0;
    for(int i=10000;i<=999999;i++)
    {
        if(check(i))
        {
        	flag=1;
        	cout<<i<<endl;
		}
    }
    if(flag==0) cout<<"-1"<<endl;
}
