#include <bits/stdc++.h>
using namespace std;
const int N= 100010;
int n, w[N];
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>w[i];
	int s1=0,s2=0;
	sort(w,w+n);
	for(int i=0; i<n/2;i++) s1+=w[i];
	for(int i=n/2;i<n;i++) s2+=w[i];
	cout<<n%2<<" "<<s2-s1;
	return 0;
}