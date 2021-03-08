#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int f[210];
	for(int i=0;i<n;i++)
	{
		cin>>f[i];
	}
	sort(f,f+n);
	for(int i=0;i<n;i++)
    {
        cout<<f[i]<<" ";
    }
	return 0;
}
