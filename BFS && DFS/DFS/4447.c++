#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int field[101][101];
bool visited[101][101];
bool submerged[101][101];
int N;
int min_num;
int max_num;
int curr_safe;
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

void dfs(int x,int y){
    visited[x][y] = true;

    for(int i=0; i<4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx >= 0 && ny >= 0 && nx < N && ny < N)
        {
            if(submerged[nx][ny] == false && visited[nx][ny] == false)
            {
                dfs(nx,ny);
            }
        }
    }
}


int main(void)
{
    cin >> N;
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            visited[i][j] = false;
        }
    }

    min_num = 101;
    max_num = 0;

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cin >> field[i][j];
            if(field[i][j] < min_num) {
                min_num = field[i][j];
            }
            if(field[i][j] > max_num) {
                max_num = field[i][j];
            }
        }
    }

    int res_safe = 0;
    //최소 높이부터 최대 높이까지 반복하여 최대안전지대갯수 확인
    for(int r=min_num; r<=max_num; r++) 
    {
        //각 케이스마다 안전지대의 갯수를 구해야하기 떄문에 초기화시켜줌
        curr_safe = 0;

        //방문했는지 안했는지 초기화하기 각 케이스마다
        for(int i=0; i<N; i++) {
            for(int j=0; j<N; j++) {
                visited[i][j] = false;
                submerged[i][j] = false;
            }
        }

        for(int i=0; i<N; i++)
        {
            for(int j=0; j<N; j++)
            {
                if(field[i][j] <= r) {
                    submerged[i][j] = true;
                }
            }
        }

        for(int i=0; i<N; i++) {
            for(int j=0; j<N; j++) {
                if(submerged[i][j] == false && visited[i][j] == false) 
                {
                    curr_safe++;
                    dfs(i,j);
                }
            }
        }

        res_safe = max(curr_safe,res_safe);
    }

    std::cout << res_safe;

    return 0;
}
