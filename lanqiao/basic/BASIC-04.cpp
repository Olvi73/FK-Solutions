#include<iostream>
using namespace std;

const int N=1000010;
int f[N];

int main()
{
    f[1]=f[2]=1;
    for(int i=3;i<=1000000;i++){
        f[i]=(f[i-1]+f[i-2])%10007;
    }
    int n;
    cin>>n;
    cout<<f[n];
    return 0;
}
