#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int n,m;
int maze[101][101];
bool visited[101][101];
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

struct Point
{
    int x,y;
};

int bfs() {
    queue<Point> q;
    q.push({1,1});
    visited[1][1] = true;

    while(!q.empty())
    {
        Point curr = q.front();
        q.pop();

        for(int i=0; i<4; i++)
        {
            int nx = curr.x + dx[i];
            int ny = curr.y + dy[i];

            if(nx <= 0 || ny <= 0 || nx > n || ny > m)
            {
                continue;
            }
            if(maze[nx][ny] == 0 || visited[nx][ny] == true)
            {
                continue;
            }

            visited[nx][ny] = true;
            maze[nx][ny] = maze[curr.x][curr.y] + 1;
            q.push({nx,ny});
        }
    }
    return maze[n][m];

}

int main(void)
{
    cin >> n >> m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            scanf("%1d",&maze[i][j]);
        }
    }

    cout << bfs();

    return 0;
}
