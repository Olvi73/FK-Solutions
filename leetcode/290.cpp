#include <bits/stdc++.h>
using namespace std;
bool wordPattern(string pattern, string s) {
        //unordered_
		map <char,string> mp;
        string tmp;
        int c=0;
        string rs;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=' ')
                tmp+=s[i];
            if(s[i]==' '||i==s.length()-1)
            {
                int flag=0;
                for(auto t=mp.begin();t!=mp.end();t++)
                {
                    if(t->second==tmp)
                        flag=1;
                }
                if(flag!=1)
                mp[pattern[c]]=tmp;
                c++;
                tmp="";
            }
        }
    
        for(int i=0;i<pattern.length();i++)
            {
            
            rs+=mp[pattern[i]];
            if(i!=pattern.length()-1)
                rs+=" ";
              }
        if(rs==s)
            return true;
        else
            return false;

}

int main()
{
	string pattern="abba";
	string s="dog cat cat dog";
	if(wordPattern(pattern,s))
		cout<<"true"<<endl;
	else cout<<"false"<<endl;
	pattern="abbc";
	s="dog dog dog dog";
	if(wordPattern(pattern,s))
		cout<<"true"<<endl;
	else cout<<"false"<<endl;
	return 0;
}
