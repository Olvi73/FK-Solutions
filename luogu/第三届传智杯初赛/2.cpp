#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x=0;
	cin>>x;
	if(x>=90)
		cout<<"4.0";
	if(x>=60&&x<=89)
	{
		int i=90;
		printf("%.1f",4.0-float((i-x)*0.1));
	}
	if(x<60)
	{
		int final=0;
		final=int(sqrt(x)*10);
		if(final<60)
		cout<<"0.0";
		else
		printf("%.1f",float(4.0-float((90-final)*0.1)));
		 
	}
	return 0;
} 
