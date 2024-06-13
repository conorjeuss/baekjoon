#include<iostream>
#include<vector>
#include<algorithm> //max함수를 사용하기 위함.
using namespace std;

//DP문제
//테이블먼저 정의하기
int dp[301][3];

//점화식찾기
//계단은 1칸 or 2칸을 밟고 올라 갈 수 있음.
//따라서 2개로 나누어 생각 할 수 있음.

int score[301];


int main(void)
{
    int n;
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        cin >> score[i];
    }

    dp[1][1] = score[1];
    dp[1][2] = 0; //1번쨰 계단을 밟을떄는 2칸을 밟고 갈수 없음
    dp[2][1] = score[2];
    dp[2][2] = score[1] + score[2];

    for(int k=3; k<=n; k++)
    {
        dp[k][1] = max(dp[k-2][1],dp[k-2][2]) + score[k];
        dp[k][2] = dp[k-1][1] + score[k];
    }

    int mx_res = max(dp[n][1],dp[n][2]);

    cout << mx_res;

    return 0;
}
