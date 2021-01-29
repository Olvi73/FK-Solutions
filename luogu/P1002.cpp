//DFS 60分 1、2、5AC / 3、4TLE 
#include<bits/stdc++.h>
using namespace std;

const int N=23;
int dx[]={2,1,-1,-2,-2,-1,1,2,}, dy[]={1,2,2,1,-1,-2,-2,-1};
int ddx[]={0,1},ddy[]={1,0};
long long p[N][N]={{1}};
bool h[N][N];
int n,m;

void init()
{
	for(int i=0;i<=N;i++)
	{
		//memset(p[i],1,sizeof(p[i]));
		//memset()只有在初始化-1,0时才会正确
		for(int j=0;j<=N;j++)
		p[i][j]=1;
	}	
} 
void horse(int x, int y)
{
	x++;
	y++;
	h[x][y]=1;
	for(int i=0;i<8;i++)
	{
		int a=x+dx[i],b=y+dy[i];
		if(a >= 1 && a <= n && b >= 1 && b <= m)
		{
			continue;
		}
		h[a][b]=1;
	}
}

int main()
{
	int x,y;
	cin>>n>>m>>x>>y;
	horse(x,y);


	for(int i=1;i<=n+1;i++)
	{
		for(int j=1;j<=m+1;j++)
		{
			if(!h[i][j])
			{
				p[i][j]=p[i - 1][j] + p[i][j - 1];
			}
		}
	} 
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
			cout<<p[i][j]<<" ";
		cout<<endl;
	}
	
	cout<<p[n][m]<<endl;
	return 0;
} 
