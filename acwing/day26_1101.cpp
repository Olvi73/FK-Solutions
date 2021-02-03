#include<bits/stdc++.h>
using namespace std;

#define x first
#define y second

const int N=200;
typedef pair<int, int> PII;

int n;
int r,c;

char maze[N][N];
int dist[N][N];

int bfs(PII start)
{
    queue<PII> q;
    q.push(start);
    memset(dist,-1,sizeof(dist));
    dist[start.x][start.y]=0;
    
    int res=0;
    int dx[] = {-1, 0, 1, 0}, dy[] = {0, 1, 0, -1};
    while(q.size())
    {
        auto t=q.front();
        q.pop();
        res++;
        for(int i=0;i<4;i++)
        {
            int x=t.x+dx[i],y=t.y+dy[i];
            if (x >= 0 && x < r && y >= 0 && y < c && maze[x][y] != '#' && dist[x][y] == -1)
            {
                dist[x][y] = dist[t.x][t.y] + 1;
                if (maze[x][y] == 'E')
                    return dist[x][y];
                q.push({x, y});
            }
        }

        
    }
    return -1;
}
int main()
{
    cin>>n;
    while(n)
    {
        cin>>r>>c;
        int x,y;
        PII start;
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
            {
                cin>>maze[i][j];
                if(maze[i][j]=='S') start={i,j};
            }
        int ans=bfs(start);
        if(ans!=-1)
        cout<<ans<<endl;
        else
        cout<<"oop!"<<endl;
        n--;
    }
    
}