#include<stdio.h>
#include<stdlib.h>

int compare(const void *a,const void *b)
{
    return (*(int*)a - *(int*)b);
}

int main(void)
{
    int arr_burger[3] = {0,};
    int arr_drink[2] = {0,};

    for(int i=0; i<3; i++)
    {
        scanf("%d",&arr_burger[i]);
    }
    for(int j=0; j<2; j++)
    {
        scanf("%d",&arr_drink[j]);
    }

    qsort(arr_burger,3,sizeof(int),compare);
    qsort(arr_drink,2,sizeof(int),compare);

    int total_price = arr_burger[0] + arr_drink[0] - 50;

    printf("%d\n",total_price);

    return 0;
}
