#include <iostream>
using namespace std;
int main()
{
	int a,b,a1,b1;
	int rs=1;
	cin>>a>>b;
	a1=a;
	b1=b;
	while(rs!=0)
	{
		rs=a%b;
		a=b;
		b=rs;
	}
	cout<<a;
	rs=a1*b1/a;
	cout<<" "<<rs;
	return 0; 
}
