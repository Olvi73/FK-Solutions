#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 10010;

int main()
{
    int l, r;
    cin >> l >> r;

    int res = 0;
    for (int i = l; i <= r; i ++ )
        for (int j = i; j; j /= 10)
            if (j % 10 == 2)
                res ++ ;

    cout << res << endl;

    return 0;
}
