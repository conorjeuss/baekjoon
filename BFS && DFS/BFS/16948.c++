#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int cnt[201][201]; //global variable 이기 때문에 모든 value 가 0
int dx[6] = {-2,-2,0,0,2,2};
int dy[6] = {-1,1,-2,2,-1,1};
int N;
int r1,c1,r2,c2;
bool check = false;

int dfs()
{
    queue<pair<int,int>> q;
    q.push({r1,c1});
    cnt[r1][c1] = 0;

    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;

        q.pop();

        if(x == r2 && y == c2) {
            return cnt[x][y];
        }

        for(int i=0; i<6; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx >= 0 && ny >= 0 && nx < N && ny < N)
            {
                if(cnt[nx][ny] == 0)
                {
                    q.push({nx,ny});
                    cnt[nx][ny] = cnt[x][y] + 1;
                }

            }
        }
    }

    return -1;
}

int main(void)
{
    cin >> N;
    cin >> r1 >> c1 >> r2 >> c2;

    int result = dfs();

    if(result != -1)
    {
        cout << result;
    }
    else {
        cout << result;
    }

    return 0;
}
