/*O(nlgn)��n�������ļ���S����һ������x��
ȷ��S���Ƿ����������͸պ�Ϊx��Ԫ��
*/
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
int S[1000000];
int noRepeat[1000000];
int repeat[1000000];
int judge(int S[],int n,int x)
{
    int nn=0;//S��ȥ�أ�nn���鳤��
    int nr=0;//S���ظ���Ԫ�أ�nr���鳤��
    std::sort(S,S+n);
 
    //ȥ�ؼ���ס�ظ�Ԫ��
    for(int i=0;i<n;i++)
        if(nn&&S[i]==noRepeat[nn-1]){//��noRepeat���Ѵ�����Ԫ�أ���Ҫ��
            if(!nr||S[i]!=repeat[nr-1])//��ס�ظ���Ԫ��
                repeat[nr++]=S[i];
        }
        else noRepeat[nn++]=S[i];
 
    //�ж��ظ���Ԫ�����Ƿ��г���2Ϊx��
    for(int i=0;i<nr;i++)
        if(repeat[nr]+repeat[nr]==x) return 1;//����������ͬ����Ϊx
 
    //��ȥ�غ�ļ����У�����Ԫ��y������x-y�Ƿ���ڣ����ֲ��ң�
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
    return 0;//������
}
int main(void)
{
    freopen("1.txt","r",stdin);
    int n,x;
    scanf("%d",&x);
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",S+i);
    if(judge(S,n,x)) return 1;//����
    return 0;//������
}
