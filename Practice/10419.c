#include<stdio.h>
#include<math.h>
int main(void)
{
    int test;
    scanf("%d",&test);

    while(test--)
    {
        int num;
        scanf("%d",&num);

        int res;
        for(res = 0; res <= num; res++)
        {
            int k = res + pow(res,2);
            if(k > num)
            {
                printf("%d\n",res-1);
                break;
            }
            else if(k == num)
            {
                printf("%d\n",res);
                break;
            }
        }
    }
    return 0;
}
