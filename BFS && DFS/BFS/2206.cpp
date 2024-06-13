#include<iostream>
#include<vector>
#include<algorithm>
#include<tuple>
#include<queue>
using namespace std;

int value_field[1001][1001][2];
char og_field[1001][1001];
int n;
int m;
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};

bool check(int x, int y) { //범위내에 있으면 true 아니면 false을 반환
    return (x<n && x >=0 && y >=0 && y<m);
}

int dfs()
{
    queue<tuple<int,int,int>> q;
    q.push({0,0,0});

    while(!q.empty())
    {
        int x,y,broken;
        tie(x,y,broken) = q.front(); //x,y,broken에 값을 개별 할당
        if(x == n-1 && y == m-1) {
            return value_field[x][y][broken];
        }

        q.pop(); //큐에있는 값을 없애고 상우하좌값을 집어넣기

        //int nxt_val = value_field[x][y][broken] + 1;

        for(int i=0; i<4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            //check 함수를 통해서 범위내에있는지 검사.
            if(!check(nx,ny)) continue;
            else {
                //벽을 부수지 않는 경우.
                if(og_field[nx][ny] == '0' && value_field[nx][ny][broken] == -1)
                {
                    value_field[nx][ny][broken] = value_field[x][y][broken] + 1;
                    q.push({nx,ny,broken});
                }
                //벽을 부수는 경우
                if(og_field[nx][ny] == '1' && value_field[nx][ny][broken] == -1 && broken == 0) {
                    value_field[nx][ny][1] = value_field[x][y][broken] + 1;
                    q.push({nx,ny,1});
                }

            }

        }
    }

    return -1; //만약 큐가 비면 끝난것. 즉 탐색불가.
}


int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++)
        {
            value_field[i][j][0] = value_field[i][j][1] = -1;
        }
    }

    value_field[0][0][0] = value_field[0][0][1] = 1; //시작점 기본값 1

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> og_field[i][j];
        }
    }

    int res = dfs();
    cout << res;

    return 0;
}
