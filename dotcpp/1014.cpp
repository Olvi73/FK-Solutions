#include <iostream>
using namespace std;
int main()
{
	long long n=-1,rs=0,s=1;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		s*=i;
		rs+=s;
	}
	cout<<rs;
	return 0;
} 

