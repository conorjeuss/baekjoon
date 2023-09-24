#include<iostream>
#include<vector>
#include<algorithm>//min max

using namespace std;

int main(void)
{
    int test_case;
    cin >> test_case;

    vector<vector<int>> dp(test_case,vector<int>(test_case));

    cin >> dp[0][0];
    for(int i=1; i<test_case; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cin >> dp[i][j];
            //dp[i][j] = max(dp[i-1][j]+dp[i][j], dp[i-1][j-1]+dp[i][j]); //if 조건문안쓰고 이코드 하나만 써도 통과됨. 그러나 j==0을 해결할때 인덱스 값이 -1인 곳으로 접근하게 되면 undefined behavior 오류가 뜰 수 도 있음. 정확하게 처리하기위해 if문 활용
            if(j == 0) {
                dp[i][j] = dp[i][j] + dp[i-1][j];
            }
            else if(j == i) { // 사실 j==, 즉 삼각형의 가장 오른쪽 값을 넣을때는 조건문으로 따로 해줄 필요가없음 12번째 줄 코드에서 빈 공간은 0으로 처리하기 때문. ex> dp[1][2] 에는 값이 안들어있는데 0으로 처리해줌
                dp[i][j] = dp[i][j] + dp[i-1][j-1];
            }
            else {
                dp[i][j] = max(dp[i-1][j]+dp[i][j], dp[i-1][j-1]+dp[i][j]);
            }
        }
    }

    int res=0;
    for(int k=0; k<test_case; k++)
    {
        if(dp[test_case-1][k] > res) {
            res = dp[test_case-1][k];
        }
    }

    cout << res;

    return 0;
}
