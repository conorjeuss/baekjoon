#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int T, M, N, K;
int field[51][51];
bool visited[51][51];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

void dfs(int x, int y) {
    visited[x][y] = true;

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && ny >= 0 && nx < N && ny < M) {
            if (field[nx][ny] && !visited[nx][ny]) {
                dfs(nx, ny);
            }
        }
    }
}

int main() {
    cin >> T;
    while (T--) {
        memset(field, 0, sizeof(field));
        memset(visited, false, sizeof(visited));

        cin >> M >> N >> K;

        for (int i = 0; i < K; i++) {
            int x, y;
            cin >> y >> x;  // 주의: 입력이 y, x 순서로 주어집니다.
            field[x][y] = 1;
        }

        int count = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (field[i][j] && !visited[i][j]) {
                    dfs(i, j);
                    count++;
                }
            }
        }

        cout << count << endl;
    }
    return 0;
}
