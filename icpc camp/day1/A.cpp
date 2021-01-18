#include<iostream>
using namespace std;
int dtox(int m)
{
    int count = 0;
    while(m != 0)
    {
        count += m%16;
        m = m/16;
    }
    return count;
}
int dtot(int m)
{
    int count = 0;
    while(m != 0)
    {
        count += m%12;
        m = m/12;
    }
    return count;
}
int sum(int m)
{
    int count = 0;
    while(m != 0)
    {
        count += m%10;
        m = m/10;
    }
    return count;
}
int main(void)
{
    int i;
    for(i = 1000;i < 9999;i++)
    {
        if(sum(i) == dtox(i) && sum(i) == dtot(i))
            cout<<i<<endl;
    }
    return 0;
}
