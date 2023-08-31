#include<stdio.h>

int check(int k,int *dp)
{
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    if(k >= 4) {
        for(int j=4; j<=k; j++)
        {
            dp[j] = dp[j-3] + dp[j-2] + dp[j-1];
        }
    }

    return dp[k];
}

int main(void)
{
    printf("start\n");

    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        int k;
        scanf("%d",&k);

        int dp[1000];

        int res = check(k,dp);

        printf("%d\n",res);
    }
    return 0;
}
