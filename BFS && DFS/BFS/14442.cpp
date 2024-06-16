#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<tuple>
using namespace std;

int n,m;
int k;
int val_field[1005][1005][13];
char og_field[1005][1005];
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

bool out_of_bounds (int x, int y)
{
    return (x < 0 || x >= n || y < 0 || y >= m);
}

int bfs()
{
    queue<tuple<int,int,int>> q;
    q.push({0,0,0});

    while(!q.empty())
    {
        //int x,y,broken;
        //tie(x,y,broken) = q.front();
        auto[x,y,broken] = q.front(); //auto코드는 자동으로 타입을 추론해서 변수에 값을 할당해준다.
        if(x == n-1 && y == m-1) {
            return val_field[x][y][broken];
        }

        q.pop();

        for(int i=0; i<4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(out_of_bounds(nx,ny)) continue;
            else {
                //벽을 부숴서 가는 경우
                if(val_field[nx][ny][broken+1] == -1 && og_field[nx][ny] == '1' && broken < k)
                {
                    val_field[nx][ny][broken+1] = val_field[x][y][broken] + 1;
                    q.push({nx,ny,broken+1});
                }
                //벽을 안부시고 가는경우
                if(val_field[nx][ny][broken] == -1 && og_field[nx][ny] == '0')
                {
                    val_field[nx][ny][broken] = val_field[x][y][broken] + 1;
                    q.push({nx,ny,broken});
                }
            }
        }
    }

    return -1;
    
}


int main(void)
{
    cin >> n >> m >> k;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> og_field[i][j];
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++)
        {
            for(int t=0; t<k; t++)
            {
                val_field[i][j][t] = -1;
            }
        }
    }

    val_field[0][0][0] = 1;

    cout << bfs();

    return 0;
}
