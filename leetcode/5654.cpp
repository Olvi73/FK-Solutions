#include<bits/stdc++.h>
using namespace std;
int countBalls(int lowLimit, int highLimit) {
        int a[100000]={0};
        int count=0;
        for(int i=lowLimit;i<=highLimit;i++)
        {
            count=0;
            int t=i;
            while(t>0)
            {
                count=count+(t%10);
                t/=10;
            }
            a[count]++;
        }
        return *max_element(a,a+100000);
}
int main()
{
	cout<<countBalls(1,10)<<endl;
}
