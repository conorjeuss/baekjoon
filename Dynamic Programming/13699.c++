#include<iostream>
#include<vector>
using namespace std;

long long dp[36] = {0,};

long long dp_val(int val)
{
    long long res = 0;

    for(int i=0; i<val; i++)
    {
        res = res + (dp[i] * dp[val-i-1]);
    }

    return res;
}

int main(void)
{
    int n;
    cin >> n;

    dp[0] = 1;

    for(int i=1; i<=n; i++)
    {
        dp[i] = dp_val(i);
    }

    cout << dp[n];

    return 0;
}
