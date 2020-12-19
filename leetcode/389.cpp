#include <bits/stdc++.h>
using namespace std;
char findTheDifference(string s, string t) {
        int p = 0;
        for (int i = 0; i < s.size(); i ++) {
        	cout<<p<<endl;
            p ^= s[i];
            p ^= t[i];
        }
        p ^= t[s.size()];
        return p;
}
int main()
{
	string s="abcd";
	string t="bdace";
	
    cout<<findTheDifference(s,t)<<endl;
	map <char,int> mp;
    string str="abcdefghijklmnopqrstuvwxzy";
    for (int i=0;i <26;i++)
    {
        char alpha=str[i];
        mp[alpha]=i;
    }
    int len=t.length();
    int num=mp[t[len-1]];
    for(int i=0;i<s.length();i++)
    {
        int nums=mp[s[i]];
        int numt=mp[t[i]];
        num=num^nums^numt;
    }
    cout<<str[num];
	
	return 0;
} 
