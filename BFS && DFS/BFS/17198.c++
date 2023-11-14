#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<string>
using namespace std;

char farm[11][11];
bool visited[11][11];
int field[11][11];
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

//B,R,L 위치
int Bx,By;
int Rx,Ry;
int Lx,Ly;

struct point
{
    int x;
    int y;
    /* data */
};


int bfs() {
    queue<point> q;
    q.push({Bx,By}); //Bx,By를 시작점으로 두고 q에 할당.
    visited[Bx][By] = true;

    while(!q.empty())
    {
        point curr = q.front(); //curr에는 q에가장 최근에 들어간 숫자(현재의 위치)가 할당되어있음 struct으로 x,y를 했기떄문에 둘다 사용가능
        q.pop(); //다음위치로 가야하기 때문에 먼저들어간 값을 pop해준다. 

        for(int i=0; i<4; i++)
        {
            int nx = curr.x + dx[i];
            int ny = curr.y + dy[i];

            if(nx < 0 || ny < 0 || nx >= 10 || ny >= 10) //그다음 탐색위치가 범위 밖으로 나가면 그냥 실행
            {
                continue;
            }

            if(nx == Rx && ny == Ry || visited[nx][ny] == true) { //다음 탐색위치가 R의 위치거나 이미 방문한곳은 넘어감. 왜냐하면 최단거리기 떄문에 다시가면 안됨.
                continue;
            }

            visited[nx][ny] = true; 
            q.push({nx,ny}); //모든 위치를 탐색해야 하기떄문에 위의 조건에 부합하지 않는다면 무조건 q에넣고 curr로 그 값을 받아서 탐색반복.
            field[nx][ny] = field[curr.x][curr.y] + 1; //위치를 값 필드에 치환시켜 값을 넣기.
        }
    }

    return field[Lx][Ly]; //모든 탐색이 끝난후에 목표위치인 Lx,Ly를 반환.

}

int main(void)
{
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++) {
            visited[i][j] = false;
            field[i][j] = 0;
        }
    }

    //입력받기
    for(int i=0; i<10; i++)
    {
        string line;
        getline(cin,line);

        for(int j=0; j<10; j++) {
            farm[i][j] = line[j];

            if(farm[i][j] == 'B') {
                Bx = i;
                By = j;
            }
            if(farm[i][j] == 'R') {
                Rx = i;
                Ry = j;
            }
            if(farm[i][j] == 'L') {
                Lx = i;
                Ly = j;
            }
        }
    }

    int res_point = (bfs() - 1);
    cout << res_point;

    return 0;
}

------------------------------<2번째코드 ==> 모든 위치를 탐색하지않고 목표값이 Lx,Ly에 도달했을때 탐색 종료>-----------------------------------------
#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<string>
using namespace std;

char farm[11][11];
bool visited[11][11];
int field[11][11];
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

//B,R,L 위치
int Bx,By;
int Rx,Ry;
int Lx,Ly;

struct point
{
    int x;
    int y;
    /* data */
};


int bfs() {
    queue<point> q;
    q.push({Bx, By});
    visited[Bx][By] = true;

    while (!q.empty()) {
        point curr = q.front();
        q.pop();

        // 'L' 위치에 도달했을 때 반환 --> 현재탐색위치가 목표값이면 바로 field값(거리)반환.
        if (curr.x == Lx && curr.y == Ly) {
            return field[curr.x][curr.y];
        }

        for (int i = 0; i < 4; i++) {
            int nx = curr.x + dx[i];
            int ny = curr.y + dy[i];

            if (nx < 0 || ny < 0 || nx >= 10 || ny >= 10) {
                continue;
            }

            if ((nx == Rx && ny == Ry) || visited[nx][ny]) {
                continue;
            }

            visited[nx][ny] = true;
            q.push({nx, ny});
            field[nx][ny] = field[curr.x][curr.y] + 1;
        }
    }

    return -1; // 'L' 위치에 도달하지 못한 경우
}


int main(void)
{
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++) {
            visited[i][j] = false;
            field[i][j] = 0;
        }
    }

    //입력받기
    for(int i=0; i<10; i++)
    {
        string line;
        getline(cin,line);

        for(int j=0; j<10; j++) {
            farm[i][함
    cout << res_point;

    return 0;
}
