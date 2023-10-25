#include<iostream>
#include<vector>
using namespace std;

//그림의 갯수와 크키 ==> cnt , size

int n,m;
int field[501][501];
bool visited[501][501];
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

int dfs(int x,int y,int &curr_size) //실수한것 : l-value로 전달해야함 주솟값을 주어 curr_size자체를 받아야함(원본을 받아야함)
{
    visited[x][y] = true;
    curr_size = curr_size + 1;
    int nx;
    int ny;

    for(int i=0; i<4; i++)
    {
        nx = x + dx[i];
        ny = y + dy[i];

        if(nx >=0 && ny >= 0 && nx < n && ny < m)
        {
            if(field[nx][ny] == 1 && visited[nx][ny] == false)
            {
                dfs(nx,ny,curr_size);
            }
        }
    }

    return curr_size;
}

int main(void)
{
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> field[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            visited[i][j] = false;
        }
    }

    //dfs작동
    int max_size = 0;
    int paint_cnt = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(field[i][j] == 1 && visited[i][j] == false)
            {
                int curr_size = 0;
                paint_cnt++;
                curr_size = dfs(i,j,curr_size);

                if(curr_size > max_size)
                {
                    max_size = curr_size;
                }
            }
        }
    }

    cout << paint_cnt << "\n" << max_size;

    return 0;
}
