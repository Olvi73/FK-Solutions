#include <bits/stdc++.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	std::ios::sync_with_stdio(false);
//	string s="abcde";
//	char a='a';
//	char b='b';
//	a^=s[2];
//	char c=a^b;
//	int cc=a^b;
//	cout<<c<<"  "<<cc;
//	printf("test%c",3);
	
	string s="27346209830709182346";
	int res=0;
	for(auto& c:s)
	{
		cout<<"res:"<<res<<"     '0':"<<(int)(c-'0')<<endl;
		res=max(res,(int)(c-'0'));
	}
	cout<<"res:"<<res;
	
	return 0;
 } 
