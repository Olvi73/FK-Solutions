#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="abcd";
    string t="bcdf";
    int a[100010];
    for(int i=0;i<s.length();i++)
    {
        a[i]=abs(s[i]-t[i]);
        cout<<a[i]<<" ";
    }


}

class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int a[100010];
        int left=0,right=0;
        int summ=0;
        for(int i=0;i<s.length();i++)
        {
            a[i]=abs(s[i]-t[i]);
        }
        while(right<s.length())
        {
            summ+=a[right];
            if(summ<=maxCost)
            {
                int t=right-left+1;
                right++;
            }
            
            else
            {
                summ-=a[left];
                left++;
                right++;
            }

        }
        return right-left;
    }
};