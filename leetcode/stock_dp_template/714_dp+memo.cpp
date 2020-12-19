class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        vector<int> memo(prices.size(),-1);
        function<int(int)> dp=[&](int start){
            if (start >=prices.size()) return 0;
            if (memo[start] !=-1) return memo[start];
            int res=0;
            int curMin=prices[start];
            for(int i=start+1;i<prices.size();i++){
                curMin = min(curMin, prices[i]);
                res= max(res,dp(i+1)+prices[i]-curMin-fee);
            }
            memo[start]=res;
            return res;
        };
        return dp(0);
    }
};
