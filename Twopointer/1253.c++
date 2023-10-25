#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> arr(N);
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int result = 0;
    // 각 수를 기준으로 그 수가 다른 두 수의 합으로 나타나는지 확인
    for(int i = 0; i < N; i++) {
        int left = 0, right = N - 1;
        while(left < right) {
            // 현재 수를 제외하고 탐색
            if(left == i) left++;
            if(right == i) right--;

            if(left >= right) break;

            int sum = arr[left] + arr[right];
            if(sum == arr[i]) {
                result++; // 좋은 수 찾음
                break;
            }

            if(sum < arr[i]) {
                left++;
            } else {
                right--;
            }
        }
    }

    cout << result << '\n';

    return 0;
}
