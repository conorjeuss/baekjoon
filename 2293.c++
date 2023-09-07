#include <iostream>
#include <vector>

int main() {
    int n, k;
    std::cin >> n >> k;

    std::vector<int> coins(n); //동적할당 배열생성
    for (int i = 0; i < n; ++i) {
        std::cin >> coins[i];
    }

    std::vector<int> dp(k + 1, 0);  // dp[i]는 i원을 만들 수 있는 경우의 수를 저장한다.
    dp[0] = 1;  // 0원을 만드는 경우의 수는 1가지 (동전을 하나도 사용하지 않는 경우)

    for (int i = 0; i < n; ++i) {
        for (int j = coins[i]; j <= k; ++j) {
            dp[j] += dp[j - coins[i]];
        }
    }

    std::cout << dp[k] << std::endl;

    return 0;
}
