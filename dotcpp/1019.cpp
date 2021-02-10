#include<bits/stdc++.h>
using namespace std;

float m,n;
float dis=0;

int main()
{
    cin>>m>>n;
    for(int i=1;i<=n;i++)
    {
        dis+=m;
        m/=2;
        dis+=m;
    }
    printf("%.2f %.2f",m,dis-m);
    return 0;
}
