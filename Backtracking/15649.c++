#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

void backtrack(int N, int M, vector<int>& sequence) {
    if (sequence.size() == M) {
        for (int num : sequence) {
            cout << num << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 1; i <= N; ++i) {
        if (find(sequence.begin(), sequence.end(), i) == sequence.end()) {
            sequence.push_back(i);
            backtrack(N, M, sequence);
            sequence.pop_back(); //pop_back()함수는 vector컨테이너의 가장 큰 인덱스의 값을 없앰. 여기서는 backtrack함수가 실행될떄마다 1번씩 실행됨. 예로들면 N=4 , M=2가 오면 i == 1인 코드에서는 재귀적으로
                                //불린 백트레킹함수에서 2 3 4 를 없애고 4까지 탐색이끝나면 가장 처음에 시작된 백트레킹 함수에서 실행되지 않았던 pop_back()코드가 실행돼서 1을 없애고 i==1일때가 끝나고 2로넘어감.
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> sequence;
    backtrack(N, M, sequence);

    return 0;
}
-------------------------------------------------------------------------------------
  //백트래킹 알고리즘
  //모든경우의 수를 생각한다. dfs기법과 유사하다고 볼 수 있다.
  //하나씩 검사하되, 만약 값이 조건에 맞지 않다면 전 단계로 돌아가 다시 탐색한다.
  //대부분의 백트래킹 알고리즘은 재귀적으로 구현된다.
