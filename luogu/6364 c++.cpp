#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#define Maxsize 1000005
typedef long long ll;
using namespace std;
int minx=0;//记录减序列一共的个数（包括重复的数字）易得减序列的个数等于减序列所有的数减去重复的个数：即minx-chong；
int chong=0;//记录减序列重复个数
int flag=0;//记录是否进入减序列
ll node; //记录最大值的假设橙子个数
ll value[Maxsize];
int n;
int main()
{   int cnt=0; //这个记录的是当前假设发橙子的个数
    memset(value,0,sizeof(value));
    cin>>n;
    ll sum=0;
    for(int i=1;i<=n;i++)
    {
        cin>>value[i];
        if(value[i]>value[i-1])//当进入增序列，则所有减序列的状态清零
        {   chong=0;
            minx=0; //减序列的个数
            flag=0;
            cnt++;  //发的橙子应该比上一个的人多
            sum+=cnt; //加起来
        }
        else if(value[i]==value[i-1]) //当相等的情况时
        {
            if(minx!=0) 
            {
            chong++;
            minx++;}
            sum+=cnt;
        }
        else   //是减序列的情况
        {   if(flag==0)//是否是刚进入减序列
           {
            flag=1; //进入减序列状态
            node=cnt; //把最大值假设发的橙子数记录
            }  
            cnt=1;//将刚进来的数的发橙子数设为1；
            minx++;
                if(minx-chong+1>node)//如果减序列的个数+1大于了最大值
                {
                    sum-=node;
                    node=minx-chong+1;
                    sum+=node;
                     sum+=minx;//这里为什么是sum+minx呢，因为减序列每加入一个数前面所有减序列的假设值都要+1；
                     continue;
            }
            sum+=minx;
            }
    }
    cout<<sum;
    return 0;
}

