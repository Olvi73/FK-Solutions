#include <iostream>
#include <cmath>
//#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n1,n2,a,b,temp;
	double c,r;
	while(cin>>n1>>n2,n1!=n2)
	{
		a=n1<n2?n1:n2;
		b=n2>n1?n2:n1;
		r=(sqrt(5.0)+1)/2;
		c=(double)(b-a);
		temp =(int) (r*c);
		if(temp==a) 
			cout<<"0"<<endl;
		else cout<<"1"<<endl;
	} 
	cout<<"0"<<endl;
	return 0;
}
