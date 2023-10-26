#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int R,C;
char field[101][101];
bool visited[101][101];
int dx[2] = {1,0};
int dy[2] = {0,1};

void dfs(int x,int y)
{
    visited[x][y] = true;
    int nx;
    int ny;

    for(int i=0; i<2; i++)
    {
        nx = x + dx[i];
        ny = y + dy[i];

        if(nx >= 0 && ny >= 0 && nx < R && ny < C)
        {
            if(field[nx][ny] == '#' && visited[nx][ny] == false) {
                dfs(nx,ny);
            }
        }
    }
}

int main(void)
{
    cin >> R >> C;
    for(int i=0; i<R; i++)
    {
        for(int j=0; j<C; j++)
        {
            cin >> field[i][j];
        }
    }

    for(int i=0; i<R; i++)
    {
        for(int j=0; j<C; j++)
        {
            visited[i][j] = false;
        }
    }

    int cnt = 0;

    for(int i=0; i<R; i++)
    {
        for(int j=0; j<C; j++)
        {
            if(field[i][j] == '#' && visited[i][j] == false)
            {
                cnt++;
                dfs(i,j);
            }
        }
    }

    cout << cnt;

    return 0;
}
