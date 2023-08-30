#include <iostream>
#include <algorithm> // for std::min
using namespace std;

int main(void) {
    int n;
    cin >> n;  

    int dp[1000001]; 
    dp[0] = dp[1] = 0; 

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i-1] + 1; //기본적으로 -1을 연산한다고 가정

        if (i % 2 == 0) {
            dp[i] = min(dp[i], dp[i / 2] + 1); //수가 2로나누어떨어지면 -1할때와 비교 dp[i/2] 한 인덱스값도 최솟값이기 때문이다. 결국 / 2라는 연산한번을 최솟값에 더해주면 됨.
        }

        if (i % 3 == 0) {
            dp[i] = min(dp[i], dp[i / 3] + 1); // % 2일때와 같은 원리 ex) n == 9면 8에서 1더하는게 최소 vs 3에서 3곱한 값이 최소 비교
        }
    }

    cout << dp[n];
    return 0;
}
