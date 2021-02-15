class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        if(nums.size()==1)
        {
            return nums[0];
        }
        int m=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=0)
            nums[i]+=nums[i-1];
            m=m>nums[i]?m:nums[i];
        }
        return m;
    }
};