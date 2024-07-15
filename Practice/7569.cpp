#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int m,n,h;
int field[102][102][102];
bool visited[102][102][102] = {false};
int dist[102][102][102] = {0}; //dist를 만들어 몇일 걸리는지 계산하기.
int dx[6] = {0,0,-1,1,0,0};
int dy[6] = {0,0,0,0,-1,1};
int dz[6] = {1,-1,0,0,0,0};

int cnt_ans = 0;

queue<tuple<int,int,int>> q;

int main(void)
{
    cin >> m >> n >> h; //가로,세로,높이

    //입력한거 field에 넣기
    for(int i=0; i<h; i++)
    {
        for(int j=0; j<n; j++)
        {
            for(int k=0; k<m; k++)
            {
                cin >> field[j][k][i];
                if(field[j][k][i] == 1) {
                    q.push({j,k,i});
                    visited[j][k][i] = true;
                }
            }
        }
    }

    while(!q.empty())
    {
        auto cur = q.front();
        int cur_x,cur_y,cur_z;
        tie(cur_x,cur_y,cur_z) = cur;

        q.pop(); //현재값을 cur_에 집어넣고 제거하기

        for(int i=0; i<6; i++) //현재 익은 토마토에 인접하는 값들 6개
        {
            int nx = cur_x + dx[i];
            int ny = cur_y + dy[i];
            int nz = cur_z + dz[i];

            if(nx >= 0 && nx < n && ny >= 0 && ny < m && nz >= 0 && nz < h)
            {
                if(field[nx][ny][nz] == 0)
                {
                    if(visited[nx][ny][nz] == false) {
                        q.push({nx,ny,nz});
                        field[nx][ny][nz] = 1;
                        visited[nx][ny][nz] = true;
                        dist[nx][ny][nz] = dist[cur_x][cur_y][cur_z] + 1;
                    }
                }
                else if(field[nx][ny][nz] == -1) {
                    continue;
                }
            }
        }

    }

    bool check = true;
    int max_val = 0;
    for(int i=0; i<h; i++)
    {
        for(int j=0; j<n; j++)
        {
            for(int k=0; k<m; k++)
            {
                if(field[j][k][i] == 0) {
                    check = false;
                }
                if(dist[j][k][i] > max_val) {
                    max_val = dist[j][k][i];
                }
            }
        }
    }

    if(check) {
        cout << max_val;
    }
    else {
        cout << "-1";
    }

    return 0;
}
