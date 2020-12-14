//leetcode 49
#include <bits/stdc++.h>
using namespace std;
int main()
{
	map< string,vector<string> > mp; //  operator >> ->  > >  add space 
	vector<string> v;
	string temp;
	for(int i=0;i<6;i++)
	{
		temp="";
		cin>>temp;
		v.push_back(temp);
	}
	for(int i=0;i<v.size();i++)
	{
		string tt=v[i];
		sort(v[i].begin(),v[i].end());
		mp[v[i]].push_back(tt);
	}
	
	for(int i=0;i<v.size();i++)
	{
		
		cout<<"v["<<i<<"]:"<<v[i]<<endl;
	}
	for(map< string,vector<string> >::iterator pp=mp.begin();pp!=mp.end();pp++)
	{
		vector<string> Data =pp->second;
		cout<<pp->first<<"  ";
		for(vector<string>::iterator m = Data.begin(); m != Data.end(); m++ ) //用迭代器的方式输出容器对象的值
			{
			cout<<"   "<<*m; 
			}
		cout<<endl;
	}	

	return 0;
 } 
