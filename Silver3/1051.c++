#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<vector<int>> board(N, vector<int>(M));
    
    // 입력 받기
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < M; ++j) {
            char c;
            cin >> c;
            board[i][j] = c - '0'; //여기서 int c로받으면 입력형식에 어긋남 1234넣었을때 각 칸에 한개씩 들어가야하므로 char로 받은후 - '0'을해주어 숫자넣기
        }
    }
    
    int maxSquare = 1;  // 최소 크기의 정사각형은 1x1 이므로 초기값을 1로 설정
    
    // 모든 위치에 대하여 검사
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < M; ++j) {
            int minSide = min(N - i, M - j);  // 현재 위치에서 만들 수 있는 최대 정사각형의 한 변의 길이
            
            for(int k = maxSquare; k < minSide; ++k) {  // 이미 찾은 정사각형보다 큰 것만 찾아보면 된다.
                if(board[i][j] == board[i + k][j] && board[i][j] == board[i][j + k] && board[i][j] == board[i + k][j + k]) {
                    maxSquare = max(maxSquare, k + 1);  // 새로운 정사각형의 한 변의 길이는 k + 1
                }
            }
        }
    }
    
    cout << maxSquare * maxSquare << endl;
    
    return 0;
}
