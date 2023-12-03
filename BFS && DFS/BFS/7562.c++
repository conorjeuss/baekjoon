#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int dx[8] = {-2,-1,1,2,2,1,-1,-2};
int dy[8] = {1,2,2,1,-1,-2,-2,-1};

int chess_width;
int start_point_x,start_point_y;
int end_point_x,end_point_y;

struct point
{
    int x;
    int y;
};

void bfs(vector<vector<bool>> &visited,vector<vector<int>> &arr) {
    queue<point> q;
    q.push({start_point_x,start_point_y});
    visited[start_point_x][start_point_y] = true;
    
    while(!q.empty())
    {
        point curr = q.front();
        q.pop();

        if (curr.x == end_point_x && curr.y == end_point_y) {
            cout << arr[end_point_x][end_point_y] << " \n";
        }

        for(int i=0; i<8; i++)
        {
            int nx = curr.x + dx[i];
            int ny = curr.y + dy[i];

            if(nx < 0 || ny < 0 || nx >= chess_width || ny >= chess_width)
            {
                continue;
            }

            if(visited[nx][ny] == true) {
                continue;
            }

            visited[nx][ny] = true;
            q.push({nx,ny});
            arr[nx][ny] = arr[curr.x][curr.y] + 1;

        }
    }

}

void go(int start_x,int start_y,int end_x, int end_y,int c_width) {
    vector<vector<int>> arr(c_width,vector<int>(c_width)); //체스판 설정
    vector<vector<bool>> visited(c_width,vector<bool>(c_width)); //방문경로

    //각각의 케이스마다 필드값과 visited값 초기화 시켜주기
    for(int i=0; i<c_width; i++) {
        for(int j=0; j<c_width; j++)
        {
            arr[i][j] = 0;
            visited[i][j] = false;
        }
    }

    //그 후에 bfs탐색으로 결과값 출력
    bfs(visited,arr);

}

int main(void)
{
    int test_case;
    cin >> test_case;

    while(test_case--)
    {
        cin >> chess_width;

        cin >> start_point_x >> start_point_y;
        cin >> end_point_x >> end_point_y;

        go(start_point_x,start_point_y,end_point_x,end_point_x,chess_width);
        
    }

    return 0;
}
