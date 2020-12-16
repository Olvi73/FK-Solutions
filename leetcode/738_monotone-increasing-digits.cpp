#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N=10;
	int ones = 1;
    int result = 0;
    int count=0,N2=N;
    while (N2>0)
    {
        N2/=10;
        
        count++;
        ones+=pow(10,count);
    }
	cout<<"ones:"<<ones<<endl;
    for(int i=0;i<9;i++)
    {
        while(result+ones>N)
        {
            ones/=10;
        }
        result+=ones;
    }
    cout<<result;
	
	
	return 0;
}

