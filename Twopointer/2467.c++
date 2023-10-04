#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> liquid(N);
    for (int i = 0; i < N; i++) {
        cin >> liquid[i];
    }

    int left = 0, right = N - 1;
    int min_sum = abs(liquid[left] + liquid[right]);
    int answer_left = left, answer_right = right;

    while (left < right) {
        int sum = liquid[left] + liquid[right];
        if (abs(sum) < min_sum) {
            min_sum = abs(sum);
            answer_left = left;
            answer_right = right;
        }

        if (sum < 0) {
            left++;
        } else {
            right--;
        }
    }

    cout << liquid[answer_left] << " " << liquid[answer_right] << "\n";

    return 0;
}
