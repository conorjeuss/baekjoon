#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int M,N;
int field[251][251];
bool visited[251][251];
int dx[8] = {-1,-1,0,1,1,1,0,-1};
int dy[8] = {0,1,1,1,0,-1,-1,-1};
int res_cnt = 0;

void dfs(int x,int y)
{
    int nx;
    int ny;
    visited[x][y] = true;

    for(int i=0; i<8; i++)
    {
        nx = x + dx[i];
        ny = y + dy[i];

        if(nx >= 0 && ny >= 0 && nx < M && ny < N)
        {
            if(field[nx][ny] == 1 && visited[nx][ny] == false)
            {
                dfs(nx,ny);
            }
        }
    }
}

int main(void)
{
    cin >> M >> N;

    for(int i=0; i<M; i++)
    {
        for(int j=0; j<N; j++) {
            field[i][j] == 0;
            visited[i][j] == false;
        }
    }

    for(int i=0; i<M; i++)
    {
        for(int j=0; j<N; j++)
        {
            cin >> field[i][j];
        }
    }

    for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++) {
            if(visited[i][j] == false && field[i][j] == 1)
            {
                res_cnt++;
                dfs(i,j);
            }
        }
    }

    cout << res_cnt;

    return 0;
}
