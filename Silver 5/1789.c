#include<stdio.h>
int  main(void)
{
    printf("start\n");

    long long s;
    scanf("%lld",&s);

    long long sum = 0;
    long long a = 0;
    while(sum <= s)
    {
        a++;
        sum += a;
    }

    printf("%lld",a-1);

    return 0;
}
