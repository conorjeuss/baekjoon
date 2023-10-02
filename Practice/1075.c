#include<stdio.h>
int main(void)
{
    int n,f;
    scanf("%d%d",&n,&f);

    int a = n % 100;
    n = n - a;

    while(1)
    {
        int res;
        res = n % f;

        if(res == 0)
        {
            int ans = n%100;
            if(ans < 10)
            {
                printf("0%d",ans);
            }
            else {
                printf("%d",n%100);
            }
            break;
        }
        else {
            n++;
        }
    }

    return 0;
}
