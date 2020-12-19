#include <bits/stdc++.h>
#define mmax 1000001
using namespace std;
int stu[mmax];
int orange[mmax];
int main()
{
	std::ios::sync_with_stdio(false);
	int n=0;
	memset(stu,0,sizeof(stu));
	memset(orange,0,sizeof(orange));
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>stu[i];
	}
	//Ë³Ğò±éÀú 
	for(int i=1;i<n;i++)
	{
		if(stu[i]>stu[i-1])
			orange[i]=orange[i-1]+1;
		if(stu[i]==stu[i-1])
			orange[i]=orange[i-1];
	}
	//ÄæĞò±éÀú
	for(int i=n-1;i>=1;i--)
	{
		if(stu[i]<stu[i-1])
		orange[i-1]=max(orange[i-1],orange[i]+1);
		if(stu[i-1]==stu[i])
		orange[i-1]=orange[i];
	}
	unsigned long long ans=n;
	for(int i=0;i<n;i++)
	{
		ans+=orange[i];
	}
//	printf("%lld",ans);
	cout<<ans;
	return 0;
}
