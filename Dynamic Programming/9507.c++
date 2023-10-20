#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
    int test_case;
    cin >> test_case;

    while(test_case--)
    {
        int num;
        cin >> num;

        vector<long long> dp (num+1);

        dp[0] = 1;
        if(num >= 1) dp[1] = 1;
        if(num >= 2) dp[2] = 2;
        if(num >= 3) dp[3] = 4;

        for(int i=4; i<=num; i++)
        {
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3] + dp[i-4];
        }

        cout << dp[num] << "\n";

    }
    return 0;
}

-----------------------------------------------------------------------------------
  /*      dp[0] = 1;
        if(num >= 1) dp[1] = 1;
        if(num >= 2) dp[2] = 2;
        if(num >= 3) dp[3] = 4;
    이 부분을 이렇게 처리한 이유
     만약 num 이 0이면 dp는 2개의 저장공간이있지만         
        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 4;
    이렇게 처리해 버리면 이미 dp[2] dp[3]까지 정의되어있어 접근하는게 문제가 됨. */
