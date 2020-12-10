#include <iostream>
#include <string>
using namespace std;
int main()
{
	int num;
	cin>>num;
	int len=1,i=0;
	int a[5];

	for(int j=0;j<5;j++)
	{
		if(num!=0)
		{
			a[j]=num%10;
			num/=10;
			i++;
		}
		else break;	
	}
	cout<<i<<endl;
	for(int j=i-1;j>=0;j--)
	{
		if (j != i) {  
            cout << a[j] << " ";
        }
        else cout << a[j];  
	}
	cout<<endl;
	for(int j=0;j<i;j++)
	{
		cout<<a[j];
	}
	return 0;
}
