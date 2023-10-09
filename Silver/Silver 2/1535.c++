#include <iostream>
using namespace std;

int N, maxJoy = 0;
int L[21], J[21];

void findMaxJoy(int idx, int health, int joy) {
    if(health <= 0) return;  
    if(idx == N+1) {
        maxJoy = max(maxJoy, joy);
        return;
    }

    // 해당 사람에게 인사를 하는 경우
    findMaxJoy(idx+1, health - L[idx], joy + J[idx]);
    // 해당 사람에게 인사를 하지 않는 경우
    findMaxJoy(idx+1, health, joy);
}

int main() {
    cin >> N;
    for(int i = 1; i <= N; i++) cin >> L[i];
    for(int i = 1; i <= N; i++) cin >> J[i];

    findMaxJoy(1, 100, 0);
    
    cout << maxJoy << endl;

    return 0;
}
-----------------------------------------------------------------
  //재귀함수를 이용하여 모든 경위의 수를 판단한다
  //만약 체력이 0이하가 되면 자동으로 N + 1까지 가지 못하여 경우의 수에서 제외된다.
  //만약 N + 1까지 갔다면 체력이 0 초과상태이고 조건에 만족한다 거기에서 maxjoy값을 갱신한다. 
