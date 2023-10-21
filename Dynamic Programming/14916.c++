#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    vector<int> dp(n+1,-1);
    if(n >= 1)
    {
        dp[1] = - 1;
    }
    if(n >= 2) {
        dp[2] = 1;
    }
    if(n >= 3) {
        dp[3] = -1;
    }
    if(n >= 4) {
        dp[4] = 2;
    }
    if(n >= 5) {
        dp[5] = 1;
    }
    for(int i=6; i<=n; i++)
    {
        if((dp[i-5] + 1) == 0) {
            dp[i] = dp[i-2] + 1;
        }
        else {
            dp[i] = min(dp[i-2]+1,dp[i-5]+1);
        }
    }

    cout << dp[n] <<"\n";
    return 0;
}
