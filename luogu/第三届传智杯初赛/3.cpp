#include<bits/stdc++.h>
using namespace std;

typedef struct val
{
	int num;
	int t;
	int k;
	int value;
	bool operator < (val const& v) const{
		if(value>v.value) return true;
		if(value==v.value) 
		{
			if(t>v.t)
				return true;
			if(t==v.t)
			{
				if(num<v.num)
				return true;
				
				return false;
			}
			
			return false;
		}
		return false;
	}
}pvalue;

int main()
{
	int n=0;
	cin>>n;
	int t=0,k=0;
	pvalue pv;
	map<pvalue,int > mp;
	for(int i=1;i<=n;i++)
	{
		pvalue pv;
		cin>>pv.t>>pv.k;
		pv.value=pv.t*pv.k;
		pv.num=i;
		mp[pv]=i;
	}
	for(auto pp=mp.begin();pp!=mp.end();pp++)
	{
		if(pp!=mp.begin())
			cout<<" ";
		cout<<pp->second;
	}
	
	return 0;
} 


