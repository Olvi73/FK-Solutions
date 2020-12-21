class Solution {
public:
    int minPartitions(string n) {
        int res;
        for(auto &c:n)
        {
            res=max(res,int(c-'0'));
//            res=max(res,int(c)-48);
        }
        return res;
    }
};
