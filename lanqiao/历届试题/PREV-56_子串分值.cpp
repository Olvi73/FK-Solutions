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
    // �ҵ������ַ� �ڴ��е�λ��
    // ��s[i]-'a' Ŀ���Ƿ��㴦��ûʲô��������
    for (int i = 0; i < slen; i++)
        v[s[i] - 'a'].push_back(i);
    // �������п��ܴ��ڵ��ַ� 'a'-'z'
    // ��Ϊ�Ѿ�ת���� �����ǣ�0-25
    for (int i = 0; i < 26; i++)
    {
        // �յĲ��ù�
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

        // ��������Ϊʲô+1,Ϊʲô����1 �Լ���ֽ��ģ�¼��ξͺ������
        // ����˵㣺
        // ���
        l = v[i].front() + 1;
        r = v[i][1] - v[i].front();
        ans += l * r;
        // �յ�
        l = v[i].back() - v[i][n - 2];
        r = slen - v[i].back();
        ans += l * r;
        // �����м�ڵ�
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
