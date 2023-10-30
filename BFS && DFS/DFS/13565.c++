#include<iostream>
#include<vector>
#include<string>
using namespace std;

int N,M;
int field[1001][1001];
bool visited[1001][1001];
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

void dfs(int x, int y) {
    visited[x][y] = true;

    for(int i=0; i<4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx >= 0 && ny >= 0 && nx < N && ny < M)
        {
            if(visited[nx][ny] == false && field[nx][ny] == 0)
            {
                dfs(nx,ny);
            }
        }
    }
}

int main(void)
{
    cin >> N >> M;

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            visited[i][j] = false;
        }
    }

    //field값 채우기 ==> 문자열로 받고 int형으로 바꿈.
    for(int i=0; i<N; i++)
    {
        string num;
        cin >> num;
        for(int j=0; j<M; j++)
        {
            field[i][j] = num[j] - '0';
        }
    }


    for(int j=0; j<M; j++)
    {
        if(field[0][j] == 0 && visited[0][j] == false)
        {
            dfs(0,j);
        }
    }
    
    bool check = false;
    for(int j=0; j<M; j++)
    {
        if(visited[N-1][j] == true) {
            check = true;
            break;
        }
    }
    
    if(check == true) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
    return 0;
}
