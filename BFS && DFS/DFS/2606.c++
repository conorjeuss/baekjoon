#include <iostream>
using namespace std;

const int MAX = 101;
int adj[MAX][MAX];  // 인접 행렬
bool visited[MAX];  // 방문 여부를 저장하는 배열
int N, M;
int count = 0;

void dfs(int node) {
    visited[node] = true;
    
    for (int i = 1; i <= N; i++) {
        if (adj[node][i] == 1 && !visited[i]) {  // 노드 i와 연결되어 있고, 아직 방문하지 않았다면
            count++;
            dfs(i);  // 노드 i로 이동하여 탐색
        }
    }
}

int main() {
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        adj[a][b] = 1;
        adj[b][a] = 1;  // 양방향 연결 정보 저장
    }

    dfs(1);  // 1번 노드에서 시작
    cout << count << endl;  // 1번 컴퓨터를 제외한 감염된 컴퓨터의 수

    return 0;
}
