#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

int N,M;
int field[101][101];
bool visited[101][101];
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};
int cnt_num = 0;
vector<int> cnt_area;

void fill_rectangle(int diff_x,int diff_y,int start_x,int start_y)
{
    for(int i=start_x; i<(start_x + diff_x); i++) {
        for(int j=start_y; j<(start_y + diff_y); j++) {
            field[i][j] = 1;
        }
    }
}

void dfs(int x,int y,int &cnt)
{
    cnt++;
    visited[x][y] = true;

    int nx;
    int ny;

    for(int i=0; i<4; i++)
    {
        nx = x + dx[i];
        ny = y + dy[i];

        if(nx >= 0 && ny >= 0 && nx < N && ny < M)
        {
            if(field[nx][ny] == 0 && visited[nx][ny] == false)
            {
                dfs(nx,ny,cnt);
            }
        }
    }
}

int main(void)
{
    int test_case;
    cin >> N >> M >> test_case;

    //field값과 visited값 수정해주기
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            field[i][j] = 0;
        }
    }
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            visited[i][j] = false;
        }
    }

    //꼭짓점 받기
    for(int i=0; i<test_case; i++)
    {
        int x1,y1;
        int x2,y2;

        cin >> x1 >> y1 >> x2 >> y2;

        int d_x = abs(y1-y2);
        int d_y = abs(x1-x2);

        fill_rectangle(d_x,d_y,y1,x1);
    }

    //dfs탐색
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            if(field[i][j] == 0 && visited[i][j] == false) {
                int cnt = 0;
                cnt_num++;
                dfs(i,j,cnt);
                cnt_area.push_back(cnt);
            }
        }
    }

    //결과값 오름차순 정렬
    sort(cnt_area.begin(),cnt_area.end());

    //출력
    cout << cnt_num << "\n";
    for(int num : cnt_area)
    {
        cout << num << " ";
    }
    
    return 0;
}
