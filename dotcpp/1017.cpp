#include <iostream>
using namespace std;
int main()
{
	long double N,sum=0;
	cin>>N;
	int x=0,factor[100];
	for (int i=1;i<=N;i++)
	{
		for (int j=1;j<=i/2;j++)
		{
			if(i%j==0)
			{
				factor[x]=j;
				x++;
				sum+=j;
			}
		}
		if(sum==i)
		{
			cout<<i<<" its factors are";
			for (int k=0; k<x;k++)
			{
				cout<<" "<<factor[k];
			}
			cout<<endl;
		}
		sum=0;
		x=0;
	}
	return 0;
}
