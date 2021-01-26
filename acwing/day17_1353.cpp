#include <bits/stdc++.h>
using namespace std;

const int N =1010;

int main()
{
	int n;
	int h[N];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>> h[i];
	int res=1e8;
	for(int i=0;i+17<=100;i++)
	{
		int cost=0,l=i,r=i+17;
		for(int j=0;j<n;j++)
			if(h[j]<l) cost+=(l-h[j]) * (l-h[j]);
			else if(h[j]>r) cost+=(h[j]-r) * (h[j]-r);
		res=min(res,cost);
	}

	cout<<res<<endl;
	return 0;
}
