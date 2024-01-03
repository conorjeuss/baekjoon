#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void)
{
    int test_case;
    cin >> test_case;

    while(test_case--)
    {
        int N;
        cin >> N;

        vector<long long> dp(101,0);

        dp[1] = 1;
        dp[2] = 1;
        dp[3] = 1;
        dp[4] = 2;
        dp[5] = 2;
        
        for(int i=6; i<=N; i++)
        {
            dp[i] = dp[i-1] + dp[i-5];
        }

        cout << dp[N] << "\n";

    }
    return 0;
}
