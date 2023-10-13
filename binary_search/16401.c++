#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binary_search(const vector<int>& snack, int M, int N) {
    int min = 1; // 길이는 1 이상이므로 시작을 1로 합니다.
    int max = snack[N-1];
    int result = 0; // 결과를 저장할 변수

    while (min <= max) {
        int mid = (min + max) / 2;
        int sum = 0;

        for (int i = 0; i < N; i++) {
            sum += snack[i] / mid;
        }

        if (sum >= M) { // 이 조건이 충족되는 최대의 mid 값을 찾기 위해 while문이 돌 동안 최대의 값을 알아내기위함
            result = mid;
            min = mid + 1;
        } 
        else {
            max = mid - 1;
        }
    }
    return result;
}

int main(void) {
    int M, N;
    cin >> M >> N;

    vector<int> snack(N);
    for (int i = 0; i < N; i++) {
        cin >> snack[i];
    }

    sort(snack.begin(), snack.end());

    int sum1 = 0;
    for (int i = 0; i < N; i++) {
        sum1 += snack[i];
    }
    if (sum1 < M) {
        cout << "0";
    } else {
        int res = binary_search(snack, M, N);
        cout << res;
    }

    return 0;
}
