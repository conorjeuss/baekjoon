#include<stdio.h>
int main(void)
{
    int num;
    scanf("%d",&num);

    long long dp[117];

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;

    for(int i=4; i<=num; i++)
    {
        dp[i] = dp[i-1] + dp[i-3];
    }

    printf("%lld",dp[num]);

    return 0;
}
