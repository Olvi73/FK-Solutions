#include <iostream>

using namespace std;
int maxBottle(int n)
{
	if(n==1&&n==0)
		return 0;
	if(n==3)
		return 1;
	if(n>3)
	{
		return n/2;
	}
}

int main()
{
	int n;
	while(cin>>n,n!=0)
	{
		cout<<maxBottle(n)<<endl;
	}
	return 0;
}
