class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res=0;
        int temp=0;
        for(auto i:nums)
        {
            if(i==1)
            {
                temp++;
                res=max(res,temp);
            }
            if(i==0)
            {
                temp=0;
            }
        }
        return res;
    }
};
