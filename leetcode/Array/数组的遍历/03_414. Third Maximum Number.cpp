class Solution {
public:
    int thirdMax(vector<int>& nums) {
        //�� vector ת��Ϊ set��set ���ݽṹ�Զ�ȥ��
        set<int>s(nums.begin(), nums.end());
        //�ٽ� set ת��Ϊ vector ����ʹ��
        nums.assign(s.begin(), s.end());
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(n<3) return nums[n-1];
        return nums[n-3];
    }
};
