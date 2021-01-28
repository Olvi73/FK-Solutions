#include<bits/stdc++.h>
using namespace std;

const int N=10010;

int n,m;
int q[N];

int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)  scanf("%d",&q[i]);
    while(m--) next_permutation(q,q+n);
    for(int i=0;i<n;i++) printf("%d ",q[i]);
    
    return 0;
}