#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int c;
    scanf("%d",&c);

    for(int i=0; i<case; i++)
    {
        int car_p;
        scanf("%d",&car_p);
        int sum = car_p;

        int op;
        scanf("%d",&op);

        for(int j=0; j<op; j++)
        {
            int p,q;
            scanf("%d %d",&p,&q);

            int res = p * q;

            sum = sum + res;
        }
        printf("%d\n",sum);
    }
    return 0;
}
