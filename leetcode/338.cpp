#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num=2;
    vector<int> ans;
    for(int i=0;i<=num;i++)
    {
        int cnt=0;
        int temp=i;
        while(temp>0)
        {
            temp&=(temp-1);
            cnt++;
        }
        ans.push_back(cnt);
    }
    for(auto i:ans)
        cout<<i<<endl;

}
/*
class Solution {
public:
    vector<int> countBits(int num) {

        vector<int> ans;
        for(int i=0;i<=num;i++)
        {
            int cnt=0;
            int temp=i;
            while(temp>0)
            {
                temp&=(temp-1);
                cnt++;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};
*/
