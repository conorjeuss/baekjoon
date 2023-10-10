#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int N,M;
int island[51][51];
bool visited[51][51];

int dx[8] = {1,-1,0,0,-1,1,-1,1};
int dy[8] = {0,0,1,-1,-1,-1,1,1};

void dfs(int x,int y)
{
    visited[x][y] = true;


    for(int i=0; i<8; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx >= 0 && ny >= 0 && nx < N && ny < M) {
            if(island[nx][ny] == 1 && !visited[nx][ny])
            {
                dfs(nx,ny);
            }
        }
        
    }
}

int main(void)
{
    while(true)
    {
        memset(island,0,sizeof(island));
        memset(visited,0,sizeof(visited));

        cin >> M >> N; // M은 열의 갯수 N은 행의 갯수 

        if(N == 0 && M == 0)
        {
            break;
        }

        for(int i=0; i<N; i++)
        {
            for(int j=0; j<M; j++)
            {
                cin >> island[i][j];
            }
        }

        int cnt = 0;
        for(int i=0; i<N; i++)
        {
            for(int j=0; j<M; j++)
            {
                if(island[i][j] == 1 && !visited[i][j]) {
                    dfs(i,j);
                    cnt++;
                } 
            }
        }

        cout << cnt << endl;

    }
    return 0;
}

-------------------------------------------------------------------------------
  //dfs문제
  //상하 좌우가 아닌 상하좌우 대각선의 방향까지 고려해야함 --> 총 8번의 탐색 
  //dfs가 새롭게 한번씩 작동 할 때마다 cnt 값을 늘려줌. dfs안에서의 재귀적 dfs함수는 cnt에서 제외되므로 상관 x
