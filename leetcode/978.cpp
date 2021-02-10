class Solution {
public:
    int maxTurbulenceSize(vector<int>& A) {
        int len = A.size();
        int up = 1, down = 1;
        int ans = 1;
        for (int i = 1; i < len; i++) {
            if (A[i] > A[i - 1]) { up = down + 1; down = 1; }
            else if (A[i] < A[i - 1]) { down = up + 1; up = 1; }
            else { up = down = 1; }
            ans = max(ans, max(up, down));
        }
        return ans;
    }
};

// 拓展 376. 摆动序列  https://leetcode-cn.com/problems/longest-turbulent-subarray/comments/