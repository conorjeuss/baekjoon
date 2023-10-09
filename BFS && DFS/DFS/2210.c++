#include<iostream>
#include<set>
#include<vector>

using namespace std;

int field[5][5];
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

set<int> s; // set 자료구조를 사용

void dfs(int x, int y, int depth, int num) {
    num = num * 10 + field[x][y]; //숫자를 int형 자료구조 set에다가 넣어야하므로 char형 말고 int형으로 표시하여 넣기.

    if(depth == 5) { // 깊이가 5가 되면, 즉 6자리의 숫자가 완성되면 set에다가 넣기.
        s.insert(num);
        return;
    }

    for(int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 5 && ny < 5 && nx >= 0 && ny >= 0) {
            dfs(nx, ny, depth+1, num);
        }
    }
}

int main(void) {
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> field[i][j];
        }
    }

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            dfs(i, j, 0, 0);
        }
    }

    cout << s.size() << endl;

    return 0;
}
