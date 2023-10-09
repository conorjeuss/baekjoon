#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

const int MAX = 100001;
int N,K;
bool visited[MAX];

int bfs() {
    queue<pair<int,int>> q;
    q.push({N,0}); //문법주의
    visited[N] = true;

    while(!q.empty()) {
        int curr = q.front().first;
        int time = q.front().second;

        if(curr == K) {
            return time;
        }

        if(curr - 1 >= 0 && !visited[curr - 1]) {
            visited[curr - 1] = true;
            q.push({curr-1,time + 1});
        }
        if(curr + 1 < MAX && !visited[curr + 1]) {
            visited[curr + 1] = true;
            q.push({curr + 1,time + 1});
        }
        if(curr * 2 < MAX && !visited[curr * 2]) {
            visited[curr * 2] = true;
            q.push({curr * 2,time + 1});
        }
        q.pop();
    }
    return -1;
}

int main(void)
{
    cin >> N >> K;
    fill(visited,visited+MAX,false);
    cout << bfs() << endl;
    return 0;
}
----------------------------------------------------------------------------------------
//BFS를 이용한 풀이
//중간에 보면 visited를 이용해서 한번 간곳은 더이상 가지 않는다 --> 시작지점으로부터 목표지점까지 최단거리를 구할 때 BFS를 이용하는데
//bfs함수를 시작지점부터 시작하기때문에 시작지점에서 이미 간곳은 다른 지점에서 간다해서 이미 최소 1번이상 느린 것이기 때문에 한번만 가면된다.
//DFS보다는 메모리를 많이 차지함 
//queue를 이용하여 구현함
