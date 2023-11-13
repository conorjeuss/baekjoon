#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int N,M;
char field[101][101];
bool visited[101][101];
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};
int count_picture = 0;

void dfs(int x, int y) {
    visited[x][y] = true;
    int nx;
    int ny;

    for(int i=0; i<4; i++) 
    {
        nx = x + dx[i];
        ny = y + dy[i];

        if(nx >= 0 && ny >= 0 && nx < N && ny < M) {
            if(visited[nx][ny] == false && field[nx][ny] == '*') 
            {
                dfs(nx,ny);
            }
        }
    }
}

int main(void)
{
    cin >> N >> M;
    cin.ignore(); //입력버퍼 비워주기

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++) {
            visited[i][j] = false;
        }
    }

    for(int i=0; i<N; i++) {
        string line;
        getline(cin,line);

        for(int j=0; j<M; j++) {
            field[i][j] = line[j];
        }
    }

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            if(visited[i][j] == false && field[i][j] == '*')
            {
                count_picture++;
                dfs(i,j);
            }
        }
    }

    cout << count_picture;
    
    return 0;
}
