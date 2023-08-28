#include<stdio.h>

void num_check(int arr,int *num)
{
    while(arr>0)
    {
        int a = arr%10;
        num[a]++;
        arr /= 10;
    }
}

int main(void)
{
    printf("start\n");

    int arr;
    int num[10] = {0,};


    scanf("%d",&arr);

    num_check(arr,num);

    int max_1 = 0;
    int max_2 = 0;

    for(int i=0; i<10; i++)
    {
        if(i == 6 || i == 9)
        {
            max_1 = max_1 + num[i];
        }

        else {
            if(num[i] > max_2) {
                max_2 = num[i];
            }
        }

    }

    max_1 = (max_1 / 2) + (max_1 % 2);

    int res = (max_1 > max_2) ? max_1 : max_2;

    printf("%d\n",res);

    return 0;
}
