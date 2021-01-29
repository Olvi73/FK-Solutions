#include <iostream>
#include <cstdio>
using namespace std;
int n,m,x,y;
long long map[42][42]={{1}};
bool horse[42][42];
int hx[9]={0,1,1,2,2,-1,-1,-2,-2},
	hy[9]={0,2,-2,1,-1,2,-2,1,-1};
int main ()
	{
		cin>>n>>m>>x>>y;
		for (int i=0;i<=8;i++)
			{
				int xx=x+hx[i],yy=y+hy[i];
				if (xx>n||xx<0||yy>m||yy<0)
					continue;
				horse[xx][yy]=1;
			}
		int l=0,k=0;
		while (!horse[0][++k]&&k<=m)
			map[0][k]=1;
		while (!horse[++l][0]&&l<=n)
			map[l][0]=1;
		for (int i=1;i<=n;i++)
			for (int j=1;j<=m;j++)
				if (!horse[i][j])
					map[i][j]=map[i-1][j]+map[i][j-1];
		cout<<map[n][m]<<endl;
		return 0;
}
