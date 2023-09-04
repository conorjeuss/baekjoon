#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define MIN(a,b) ((a < b) ? a : b)

int main(void)
{
    int n;
    scanf("%d",&n);

    int cost[n][3];
    int dp[n][3];

    for(int i=0; i<n; i++)
    {
        scanf("%d %d %d",&cost[i][0],&cost[i][1],&cost[i][2]);
    }

    //dp배열 채우기
    dp[0][0] = cost[0][0];
    dp[0][1] = cost[0][1];
    dp[0][2] = cost[0][2];

    for(int i=1; i<n; i++)
    {
        dp[i][0] = cost[i][0] + MIN(dp[i-1][1],dp[i-1][2]);
        dp[i][1] = cost[i][1] + MIN(dp[i-1][0],dp[i-1][2]);
        dp[i][2] = cost[i][2] + MIN(dp[i-1][0],dp[i-1][1]);
    }

    int result = MIN(MIN(dp[n-1][0],dp[n-1][1]),dp[n-1][2]);

    printf("%d",result);

}
