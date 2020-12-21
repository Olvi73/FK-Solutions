#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n=0,count=0;
	cin>>n;
	cin.get();
	set<string> v;
	map<string,int> mp;
	map<int,string> sortedMap;
	
	while (n>0)
	{
		string curStr;
		getline(cin,curStr);
		string temp=curStr;
		if(temp.substr(0,2)=="to")
		{
			string touch="";
			touch=curStr.substr(6);
			int t=0;
			
			t=mp.count(touch);
			if(t==0)
			{
				mp[touch]=count;
				sortedMap[count]=touch;
				count++;
			}
			
		}
		if(temp.substr(0,2)=="rm")
		{
			string rm="";
			rm=curStr.substr(3);
			int temp=mp[rm];
			mp.erase(rm);
			sortedMap.erase(temp);
		}
		if(temp.substr(0,2)=="re")
		{
			string rename="";
			rename=curStr.substr(7);
			string old,newn;
			int i=0;
			while(rename[i]!=' ')
			{
				old+=rename[i];
				i++;
			}
			newn=rename.substr(i+1);
			int oldc=0;
			oldc=mp[old];
			mp.erase(old);
			sortedMap.erase(oldc);
			mp[newn]=oldc;
			sortedMap[oldc]=newn;
		}
		
		if(temp.substr(0,2)=="ls")
		{
			
			for(map<int,string>::iterator mm=sortedMap.begin();mm!=sortedMap.end();mm++)
			{
				cout<<mm->second<<endl;
			}
			
		}
		n--;
	}
	
	return 0;
} 
