#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
using namespace std;

int N,M;
char field[1001][1001];
bool visited[10001][10001];
int dx[4] = {-1,1,0,0}; //상하좌우
int dy[4] = {0,0,-1,1};

bool outofbounds (int x, int y)
{
    return (x < 0 || x >= M || y < 0 || y >= N);
} //만약 저중에 하나라도 있으면 true값을 반환 --> 범위 밖

int main(void)
{
    while(1)
    {
        cin >> N >> M;

        if(N==0 && M==0) {
            break;
        }

        queue<pair<int,int>> q;
        
        for(int i=0; i<M; i++)
        {
            string line;
            cin >> line;

            for(int j=0; j<N; j++)
            {
                field[i][j] = line[j];
                visited[i][j] = false;
                if(field[i][j] == 'S')
                {
                    q.push({i,j});
                    visited[i][j] = true;
                }
            }
        }

        while(!q.empty())
        {
            int cur_x,cur_y;
            //tie(cur_x,cur_y) = q.front();
            cur_x = q.front().first;
            cur_y = q.front().second;


            q.pop();

            for(int i=0; i<4; i++)
            {
                int nx = cur_x + dx[i];
                int ny = cur_y + dy[i];

                if(outofbounds(nx,ny)) {
                    continue;
                }
                else { //범위안쪽에 있다.
                    if(visited[nx][ny] == false && field[nx][ny] == 'T')
                    {
                        field[nx][ny] = 'S';
                        visited[nx][ny] = true;
                        q.push({nx,ny});
                    }
                }

            }
        }
        
        //출력
        for(int i=0; i<M; i++)
        {
            for(int j=0; j<N; j++)
            {
                cout << field[i][j];
            }
            cout << "\n";
        }
    }

    return 0;
}
