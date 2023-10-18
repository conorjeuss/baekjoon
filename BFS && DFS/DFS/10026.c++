#include<iostream>
#include<vector>

using namespace std;

const int MAX = 101;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,-1,1};

char field[MAX][MAX];
bool visited[MAX][MAX];

// 적록색이 아닌사람
void dfs1(int x,int y,int N,char target)
{
    visited[x][y] = true;

    for(int i=0; i<4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx >= 0 && ny >= 0 && nx < N && ny < N )
        {
            if(field[nx][ny] == target && !visited[nx][ny])
            {
                dfs1(nx,ny,N,target);
            }
        }
    }
}

// 적록색인 사람
void dfs2(int x, int y, int N,char target)
{
    visited[x][y] = true;

    for(int i=0; i<4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx >= 0 && ny >= 0 && nx < N && ny < N )
        {
            if(target == 'B') {
                if(field[nx][ny] == target && !visited[nx][ny])
                    dfs2(nx,ny,N,target);
            }
            else {  // R or G
                if((field[nx][ny] == 'R' || field[nx][ny] == 'G') && !visited[nx][ny])
                    dfs2(nx,ny,N,target);
            }
        }
    }
}

int main(void)
{
    int N;
    cin >> N;

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            cin >> field[i][j];

    int nonColorBlindCount = 0;
    int colorBlindCount = 0;

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(!visited[i][j])
            {
                nonColorBlindCount++;
                dfs1(i,j,N,field[i][j]);
            }
        }
    }

    // Reset visited array
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            visited[i][j] = false;

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(!visited[i][j])
            {
                colorBlindCount++;
                dfs2(i,j,N,field[i][j]);
            }
        }
    }
    
    cout << nonColorBlindCount << " " << colorBlindCount << endl;
    return 0;
}
