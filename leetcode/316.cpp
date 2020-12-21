#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	string s;
	map<char,int> mp;
	cin>>s;
	for(int i=0;i<s.length();i++){
		mp[s[i]]++;
	}
	for(auto mm=mp.begin();mm!=mp.end();mm++)
	{
		cout<<mm->first;
		cout<<mm->second<<endl;
	}
		
} 
