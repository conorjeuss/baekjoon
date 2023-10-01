#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    while(1)
    {
        int a;
        scanf("%d",&a);

        if(a == 0) {
            break;
        }

        else {
            int *arr = (int*)malloc(sizeof(int) * (2*a));
            for(int j=0; j<2*a; j++)
            {
                arr[j] = 0;
            }

            int res=0;
            for(int i=0; i<2*a; i++)
            {
                scanf("%d",&arr[i]);
                if(i==0) {
                    res = res + arr[i];
                }
                else if(i==1) {
                    res = res - arr[i];
                }
                else {
                    if(i%2==0) {
                        res *= arr[i];
                    }
                    else {
                        res = res - arr[i];
                    }
                }
            }
            printf("%d\n",res);
        }
    }

    return 0;
}
