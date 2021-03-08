class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> cnts(nums.size(),0);
        for(auto num:nums){
            cnts[num-1]++;
        }
        int repeat,lost;
        repeat=lost=0;
        for(int i=0;i<cnts.size();i++){
            if(cnts[i]==0){
                lost=i+1;
            }else if(cnts[i]==2){
                repeat=i+1;
            }
        }
        return vector<int>{repeat,lost};
    }
};