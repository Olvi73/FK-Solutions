class Solution {
public:
    int maxProfit(vector<int>& prices) {
     //   map <int,int> memo;
        function<int(int,int)> dp=[&](int start,int k){
            if (start >=prices.size()) return 0;
            if (k==0) return 0;
         //   if (memo[start] !=-1) return memo[start];
            int res=0;
            int curMin=prices[start];
            for(int i=start+1;i<prices.size();i++){
                curMin = min(curMin, prices[i]);
                res= max(res,dp(i+1,k-1)+prices[i]-curMin);
            }
      //      memo[start]=res;
            return res;
        };
        return dp(0,2);
    }
};
