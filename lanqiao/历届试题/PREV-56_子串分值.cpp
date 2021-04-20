#include <iostream>
#include <vector>
using namespace std;
const int n = 100010;
typedef long long ll;
vector<int> v[n];
int main()
{
    string s;
    ll ans = 0, slen, l, r;
    cin >> s;
    slen = s.size();
    // 找到所有字符 在串中的位置
    // 用s[i]-'a' 目的是方便处理，没什么特殊意义
    for (int i = 0; i < slen; i++)
        v[s[i] - 'a'].push_back(i);
    // 遍历所有可能存在的字符 'a'-'z'
    // 因为已经转换了 所以是：0-25
    for (int i = 0; i < 26; i++)
    {
        // 空的不用管
        if (v[i].empty())
            continue;
        if (v[i].size() == 1)
        {
            l = v[i].front() + 1;
            r = slen - v[i].front();
            ans += l * r;
            continue;
        }
        int n = v[i].size();

        // 至于下面为什么+1,为什么不加1 自己在纸上模仿几次就很清楚了
        // 处理端点：
        // 起点
        l = v[i].front() + 1;
        r = v[i][1] - v[i].front();
        ans += l * r;
        // 终点
        l = v[i].back() - v[i][n - 2];
        r = slen - v[i].back();
        ans += l * r;
        // 处理中间节点
        for (int j = 1; j < n - 1; j++)
        {
            l = v[i][j] - v[i][j - 1];
            r = v[i][j + 1] - v[i][j];
            ans += l * r;
        }
    }
    cout << ans;

    return 0;
}
