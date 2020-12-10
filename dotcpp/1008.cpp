#include <iostream>
using namespace std;
int main()
{
	int s;
	cin>>s;
	if(s>=90)
		cout<<"A";
	if(s<89&&s>=80)
		cout<<"B";
	if(s<79&&s>=70)
		cout<<"C";
	if(s<69&&s>=60)
		cout<<"D";
	if(s<60)
		cout<<"E";
	return 0;
 } 
