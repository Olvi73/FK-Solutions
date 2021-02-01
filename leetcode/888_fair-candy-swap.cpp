// 1692ms 35.4MB
class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        int n1=0,n2=0;
        for(auto i: A)
        {
            n1+=i;
        }
        for(auto i: B)
        {
            n2+=i;
        }
        vector<int> ans;
        for(auto i: A)
            for(auto j: B)
            {
                if(n1-i+j==n2+i-j)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        return ans;
    }
};



// 760ms 35.5MB

class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        int n1=0,n2=0;
        for(auto i: A)
        {
            n1+=i;
        }
        for(auto i: B)
        {
            n2+=i;
        }

        for(auto i: A)
            for(auto j: B)
            {
                if(n1-i+j==n2+i-j)
                {
                    return {i,j};
                }
            }
        return {};
    }
};