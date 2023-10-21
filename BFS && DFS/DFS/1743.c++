#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int field[101][101];
bool visited[101][101];
int N,M;
int trash_num;
int curr_cnt;

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,-1,1};

int dfs(int x,int y) {
    visited[x][y] = true;
    //curr_cnt = 1 <== 실수했던것 : 이렇게 되면 dfs가 한번 돌때마다 1로 초기화됨
    for(int i=0; i<4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx >= 0 && ny >= 0 && nx <= N && ny <=M)
        {
            if(field[nx][ny] == 1 && (visited[nx][ny] == false))
            {
                curr_cnt++;
                dfs(nx,ny);
            }
        }
    }

    return curr_cnt;
}


int main(void)
{
    cin >> N >> M >> trash_num;

    for(int i=0; i<101; i++)
    {
        for(int j=0; j<101; j++)
        {
            visited[i][j] = false;
            field[i][j] = 0;
        }
    }

    for(int i=0; i<trash_num; i++)
    {
        int a,b;
        cin >> a >> b;

        field[a][b] = 1;
    }

    int max_cnt = 0;
    for(int i=0; i<=N; i++)
    {
        for(int j=0; j<=M; j++)
        {
            if(!visited[i][j] && field[i][j] == 1)
            {
                curr_cnt = 1;
                int res;
                res = dfs(i,j);
                if(max_cnt < res) {
                    max_cnt = res;
                }
            }
        }
    }

    cout << max_cnt;

    return 0;
}
