#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#define Maxsize 1000005
typedef long long ll;
using namespace std;
int minx=0;//��¼������һ���ĸ����������ظ������֣��׵ü����еĸ������ڼ��������е�����ȥ�ظ��ĸ�������minx-chong��
int chong=0;//��¼�������ظ�����
int flag=0;//��¼�Ƿ���������
ll node; //��¼���ֵ�ļ�����Ӹ���
ll value[Maxsize];
int n;
int main()
{   int cnt=0; //�����¼���ǵ�ǰ���跢���ӵĸ���
    memset(value,0,sizeof(value));
    cin>>n;
    ll sum=0;
    for(int i=1;i<=n;i++)
    {
        cin>>value[i];
        if(value[i]>value[i-1])//�����������У������м����е�״̬����
        {   chong=0;
            minx=0; //�����еĸ���
            flag=0;
            cnt++;  //���ĳ���Ӧ�ñ���һ�����˶�
            sum+=cnt; //������
        }
        else if(value[i]==value[i-1]) //����ȵ����ʱ
        {
            if(minx!=0) 
            {
            chong++;
            minx++;}
            sum+=cnt;
        }
        else   //�Ǽ����е����
        {   if(flag==0)//�Ƿ��Ǹս��������
           {
            flag=1; //���������״̬
            node=cnt; //�����ֵ���跢�ĳ�������¼
            }  
            cnt=1;//���ս��������ķ���������Ϊ1��
            minx++;
                if(minx-chong+1>node)//��������еĸ���+1���������ֵ
                {
                    sum-=node;
                    node=minx-chong+1;
                    sum+=node;
                     sum+=minx;//����Ϊʲô��sum+minx�أ���Ϊ������ÿ����һ����ǰ�����м����еļ���ֵ��Ҫ+1��
                     continue;
            }
            sum+=minx;
            }
    }
    cout<<sum;
    return 0;
}

