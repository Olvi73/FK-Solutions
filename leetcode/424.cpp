

#include<bits/stdc++.h>
using namespace std;

//±ê×¼´ð°¸ 
int characterReplacement(string s, int k) {
        vector<int> num(26);
        int n = s.length();
        int maxn = 0;
        int left = 0, right = 0;
        while (right < n) {
            num[s[right] - 'A']++;
            maxn = max(maxn, num[s[right] - 'A']);
            if (right - left + 1 - maxn > k) {
                num[s[left] - 'A']--;
                left++;
            }
            right++;
        }
        cout<<s.length()<<endl;
        cout<<left<<" "<<s[left]<<"   "<<right<<"   "<<s[right-1]<<endl;
        return right - left;
    }

// 35/37 WA
int characterReplacement1(string s, int k) {
        int left=0,right=1,temp=0,l=0;
        int res=0;
        for(int left=0;left<s.length();left++)
        {
            temp=k;
            right=left;
            while(temp>=0)
            {
                if(s[right]!=s[left])
                    temp--;
                if(temp>=0)
                right++;
                if(right==s.length())
                break;
            }
            l=right-left;
            res=max(res,l);
        }
        return res;
    }
int main()
{
	string s="AAAAAAAAABABCDEFGHIUDPOWQEINVMZNCDOARKD";
	int k=2;
	cout<<characterReplacement(s,k);

}
