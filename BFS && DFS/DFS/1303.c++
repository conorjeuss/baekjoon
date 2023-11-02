#include<iostream>
#include<vector>
#include<string>
#include<math.h>
using namespace std;

int N,M;
char field[101][101];
bool visited[101][101];
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

//power
int power_of_W = 0;
int power_of_B = 0;

void dfs(int x,int y,char target,int &num_of_soldier)
{
    num_of_soldier = num_of_soldier + 1;
    visited[x][y] = true;
    int nx;
    int ny;

    for(int i=0; i<4; i++)
    {
        nx = x + dx[i];
        ny = y + dy[i];

        if(nx >= 0 && ny >=0 && nx < N && ny < M) {
            if(field[nx][ny] == target && visited[nx][ny] == false) {
                dfs(nx,ny,target,num_of_soldier);
            }
        }
    }
}

int main(void)
{
    cin >> M >> N;
    for(int i=0; i<N; i++)
    {
        string line;
        cin >> line;
        for(int j=0; j<M; j++)
        {
            field[i][j] = line[j];
        }
    }

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            visited[i][j] = false;
        }
    }

    //dfs구현
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            if(visited[i][j] == false) {
                int num_of_soldier = 0;
                dfs(i,j,field[i][j],num_of_soldier);
                if(field[i][j] == 'W') {
                    power_of_W += pow(num_of_soldier,2);
                }
                if(field[i][j] == 'B') {
                    power_of_B += pow(num_of_soldier,2);
                }
            }
        }
    }

    cout << power_of_W << " " << power_of_B;

    return 0;
}
