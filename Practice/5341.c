#include<stdio.h>
int main(void)
{
    long long n;
    while(scanf("%lld",&n) != 0)
    {
        long long sum = 0;
        for(int i=1; i<=n; i++)
        {
            sum += i;
        }

        if(n == 0) {
            break;
        }
        else {
            printf("%lld\n",sum);
        }
    }

    return 0;
}
