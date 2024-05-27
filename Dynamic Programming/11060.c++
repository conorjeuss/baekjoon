#include<iostream>
#include<vector>
#include<algorithm>
#include<climits> //INT_MAX를 사용하기위한 헤더파일
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    vector<int> arr(N); //원래 배열
    vector<int> dp(N,INT_MAX); //dynamic programming 배열
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    }

    dp[0] = 0;

    for(int i=0; i<N; i++) {
        if (dp[i] == INT_MAX) continue; // 도달할 수 없는 칸은 건너뛰기 dp값이 INT_MAX라는 것은 점프해서 못간다는 뜻 --> 건너뛰어야함.

        for(int j=1; j<=arr[i] && i+j < N; j++) //여기서 점프할수있는 최대값이 N을 넘으면안된다. 배열의 인덱스값(i+j)는 N-1까지가 최대이기떄문이다
        {
            dp[i+j] = min(dp[i+j],dp[i] + 1);
        }
    }

    if (dp[N - 1] == INT_MAX) {
        cout << -1 << endl; // 도달할 수 없는 경우
    } else {
        cout << dp[N - 1] << endl; // 최소 점프 횟수 출력
    }

    return 0;
}
