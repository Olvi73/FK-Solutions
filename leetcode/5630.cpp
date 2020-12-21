#include<bits/stdc++.h>
using namespace std;

int maximumUniqueSubarray(vector<int>& nums) {
    std::ios::sync_with_stdio(false);
    int s=0;
    int res=0;
    int left=0;
    unordered_set<int> temp;
    for(int n=0;n<nums.size();n++)
    {
        if(temp.insert(nums[n]).second)
            s+=nums[n];
        else
        {
            res=max(res,s);
            while(nums[left]!=nums[n])
            {
                s-=nums[left];
                temp.erase(nums[left]);
                left++;
            }
            left++;
        }
    }
    res=max(res,s);
    return res;
}

int main(void)
{
	vector<int> nums; 
	for(int i=0;i<5;i++)
	{
		int c;
		cin>>c;
		nums.push_back(c);
	}
	cout<<maximumUniqueSubarray(nums)<<endl;


}
 
