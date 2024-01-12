#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int N,M;
int field[501][501]; //나이트의 이동횟수 
bool check[501][501];
int dx[8] = {-1,-2,-2,-1,1,2,2,1};
int dy[8] = {-2,-1,1,2,2,1,-1,-2};

//vector<vector<int>> target(2,vector<int>(M)); //타켓값들저장

void bfs(int start_x,int start_y)
{
    queue<pair<int,int>> q;
    q.push({start_x,start_y});
    check[start_x][start_y] = true; // 시작 위치 방문 체크
    field[start_x][start_y] = 0;
    
    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        for(int i=0; i<8; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx >= 0 && ny >= 0 && nx < N && ny < N)
            {
                if(check[nx][ny] == false) {
                    check[nx][ny] = true;
                    field[nx][ny] = field[x][y] + 1;
                    
                    q.push({nx,ny});
                }
            }
        }
    }
}

int main(void)
{
    cin >> N >> M;
    int start_x,start_y;
    cin >> start_x >> start_y;

    vector<vector<int>> target(2,vector<int>(M)); //타켓값들저장
    for(int i=0; i<M; i++)
    {
        cin >> target[0][i] >> target[1][i];
    }

    start_x--;
    start_y--;

    bfs(start_x,start_y);

    for(int i=0; i<M; i++) {
        cout << field[target[0][i]-1][target[1][i]-1] << " ";    
    }

    return 0;
}
