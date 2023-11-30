#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;
//#define MAX 25;

int N;
int field[25][25];
bool visited[25][25];
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};
vector<int> arr_cnt;
int total_apt = 0;

void dfs(int x,int y,int &cnt)
{
    int nx;
    int ny;
    visited[x][y] = true;
    cnt++;

    for(int i=0; i<4; i++)
    {
        nx = x + dx[i];
        ny = y + dy[i];

        if(nx >= 0 && ny >= 0 && nx < N && ny < N)
        {
            if(field[nx][ny] == 1 && visited[nx][ny] == false)
            {
                dfs(nx,ny,cnt);
            }
        }
    }

}

int main(void)
{
    cin >> N;

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++)
        {
            visited[i][j] = false;
        }
    }

    //문자열로 받기
    for(int i=0; i<N; i++)
    {
        string line;
        cin >> line;

        for(int j=0; j<N; j++)
        {
            field[i][j] = line[j] - '0';
        }
    }

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++)
        {
            if(visited[i][j] == false && field[i][j] == 1)
            {
                int cnt = 0;
                total_apt++;
                dfs(i,j,cnt);
                arr_cnt.push_back(cnt);
            }
        }
    }

    //오름차순 정렬
    sort(arr_cnt.begin(),arr_cnt.end());

    cout << total_apt << "\n";
    for(int num : arr_cnt)
    {
        cout << num << "\n";
    }

    return 0;
}
