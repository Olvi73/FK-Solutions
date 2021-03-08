#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums={1,2,5,1,3};
    int n = nums.size();
    vector<int> ret(n, -1);
    stack<int> stk;
    for (int i = 0; i < n * 2 - 1; i++) {
        while (!stk.empty() && nums[stk.top()] < nums[i % n]) {
            ret[stk.top()] = nums[i % n];
            cout<<"top:"<<stk.top()<<" nums[i%n]:"<<nums[i%n]<<"  n:"<<n<<endl;
            stk.pop();
        }
        cout<<"push:"<<i%n<<endl;
        stk.push(i % n);
    }
    for(auto i:ret)
    {
        cout<<i<<endl;
    }
    return 0;
}
