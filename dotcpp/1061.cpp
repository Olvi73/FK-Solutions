#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a[20];
	int count=0;
	float sum=0;
	for(int i=0;i<20;i++)
	   cin>>a[i];
	for(int i=0;i<20;i++)
	{
		if (a[i]<0)
			count++;
		if(a[i]>0)
			sum+=a[i];
	}
	cout<<count<<endl;
	sum=sum/(20-float(count));
	printf("%.2f",sum);
}
