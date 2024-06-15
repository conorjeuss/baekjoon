#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<tuple>
using namespace std;

int val_field[1002][1002][2];
char og_field[1002][1002];
int n;
int m;
int dx[4] = {-1,1,0,0}; //상하좌우 이동
int dy[4] = {0,0,-1,1};


//범위지정해주는 함수 만들기
bool out_of_bound(int x,int y)
{
    if(x < 0 || x >= n || y < 0 || y >= m)
    {
        return false;
    }
    else {
        return true;
    }
}

//bfs함수
int bfs()
{
    int x,y,broken;
    queue<tuple<int,int,int>> q;
    q.push({0,0,0}); //시작지점 넣기

    while(!q.empty())
    {
        tie(x,y,broken) = q.front(); //x,y는 cuurent 값임 
        if(x == n-1 && y == m-1) {
            return val_field[x][y][broken];
        }

        q.pop();

        int nx;
        int ny;

        for(int i=0; i<4; ++i)
        {
            nx = x + dx[i];
            ny = y + dy[i];

            if(out_of_bound(nx,ny) == false) continue;
            else {
                //다음값이 범위 안에있고 벽을 안부시고 가는 경우 (한번간곳은 값이 -1이 아니기 떄문에 최소값 x)
                if(og_field[nx][ny] == '0' && val_field[nx][ny][broken] == -1)
                {
                    val_field[nx][ny][broken] = val_field[x][y][broken] + 1;
                    q.push({nx,ny,broken});
                }
                //다음값이 범위 안에있고 벽을 부시고 가는 경우
                if(og_field[nx][ny] == '1' && val_field[nx][ny][broken] == -1 && !broken)
                {
                    val_field[nx][ny][1] = val_field[x][y][broken] + 1;
                    q.push({nx,ny,1});
                }
            }
        }
    }

    return -1;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    //char입력받기
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> og_field[i][j];
        }
    }

    //val_field값 기본값 설정
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            val_field[i][j][0] = val_field[i][j][1] = -1;
        }
    }

    //시작지점 값 지정하기
    val_field[0][0][0] = val_field[0][0][1] = 1;

    int res = bfs();
    cout << res;

    return 0;
}
