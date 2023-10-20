#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
    int n,m;
    cin >> n >> m;

    vector<vector<int>> dp (n+1,vector<int>(m+1));

    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=m; j++)
        {
            if(i == 0 || j == 0) {
                dp[i][j] = 0;
            }
            else if(i == 1 && j == 1) {
                dp[i][j] = 1;
            }
            else {
                dp[i][j] = ((dp[i-1][j] + dp[i][j-1]) % 1000000007 + dp[i-1][j-1]) % 1000000007; //연산을 수행할 때 중간마다 나누어주어 오버플로우를 방지한다.
            }
        }
    }

    cout << dp[n][m];
    return 0 ;
}
