#include <iostream>
using namespace std;
int main()
{
	long long a,b,c;
	cin>>a>>b>>c;
	long long int max;
	max=a>b?a:b;
	max=max>c?max:c;
	cout<<max;
	return 0; 
} 
