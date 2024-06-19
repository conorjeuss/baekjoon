#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int n,m;
int field[1004][1004];
int field_val[1004][1004]; //값을 저장할 공간
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

void bfs()
{
    queue<pair<int,int>> q;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(field[i][j] == 1)
            {
                q.push({i,j});
            }
        }
    }

    while(!q.empty())
    {
        auto[x,y] = q.front();
        q.pop();

        for(int i=0; i<4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || nx >= n || ny < 0 || ny >= m) {
                continue;
            }
            else {
                if(field[nx][ny] == 0 && field_val[nx][ny] == -2) //bfs를 할떄는 꼭 방문했는지 안했는지 확인해주어야한다.
                {
                    field_val[nx][ny] = field_val[x][y] + 1;
                    q.push({nx,ny});
                }
            }

        } 
    }

}


int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> m >> n;

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++)
        {
            cin >> field[i][j];
            if(field[i][j] == 0) {
                field_val[i][j] = -2;
            }
            else {
                field_val[i][j] = 0;
            }
        }
    }

    bfs();
    //결과값 찾아내기

    int res = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(field_val[i][j] == -2) {
                cout << "-1";
                return 0;
            }
            res = max(res,field_val[i][j]);
        }
    }

    cout << res << endl;

    return 0;
}
