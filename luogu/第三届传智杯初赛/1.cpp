#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=0,v=0,m=0,a=0;
	int fee=0;
	int count=0;
	cin>>n>>v>>m>>a;
	for(int i=0;i<n;i++)
	{
		if(count==m)
		{
			v+=a;
			count=0;
		}
		fee+=v;
		count++;
	}
	cout<<fee;
	return 0;
} 
