#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    cin >> str;

    reverse(str.begin(), str.end());
    if (str.back() == '-')
    {
        cout << '-';
        str.pop_back();
    }

    int k = 0;
    while (k + 1 < str.size() && str[k] == '0') k ++ ;
    while (k < str.size()) cout << str[k ++ ];
    return 0;
}