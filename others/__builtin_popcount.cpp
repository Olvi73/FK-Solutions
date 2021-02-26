#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> words = {"aaaa","asas","able","ability","actt","actor","access"};
    unordered_map<int,int> frequency;
    for(auto word:words)
    {
        int mask=0;
        for(char ch:word)
        {
            mask|=(1<<(ch-'a'));
            cout<<"ch:"<<ch<<" mask:"<<mask<<endl;
        }
        if(__builtin_popcount(mask)<=7)
            ++frequency[mask];
    }
    for(auto i=frequency.begin();i!=frequency.end();i++)
    {
        cout<<"first:"<<i->first<<endl;
        cout<<"second:"<<i->second<<endl;

    }
}
