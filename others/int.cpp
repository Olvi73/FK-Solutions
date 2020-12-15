/*O(nlgn)：n个整数的集合S和另一个整数x，
确定S中是否存在两个其和刚好为x的元素
*/
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
int S[1000000];
int noRepeat[1000000];
int repeat[1000000];
int judge(int S[],int n,int x)
{
    int nn=0;//S中去重，nn数组长度
    int nr=0;//S中重复的元素，nr数组长度
    std::sort(S,S+n);
 
    //去重及记住重复元素
    for(int i=0;i<n;i++)
        if(nn&&S[i]==noRepeat[nn-1]){//若noRepeat中已存在这元素，则不要它
            if(!nr||S[i]!=repeat[nr-1])//记住重复的元素
                repeat[nr++]=S[i];
        }
        else noRepeat[nn++]=S[i];
 
    //判断重复的元素中是否有乘以2为x的
    for(int i=0;i<nr;i++)
        if(repeat[nr]+repeat[nr]==x) return 1;//存在两个相同数和为x
 
    //在去重后的集合中，对于元素y，考查x-y是否存在（二分查找）
    for(int i=0;i<nn;i++){
        int key=x-noRepeat[i];
        int low=i+1,high=nn-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(key==noRepeat[mid]) return 1;
            else if(key<noRepeat[mid]) high=mid-1;
            else low=mid+1;
        }
    }
    return 0;//不存在
}
int main(void)
{
    freopen("1.txt","r",stdin);
    int n,x;
    scanf("%d",&x);
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",S+i);
    if(judge(S,n,x)) return 1;//存在
    return 0;//不存在
}
