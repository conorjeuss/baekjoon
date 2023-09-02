#include<stdio.h>
#include<stdlib.h>

int compare(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

int main(void)
{
    //printf("start\n");

    int arr[3];
    for(int i=0; i<3; i++)
    {
        scanf("%d",&arr[i]);
    }

    qsort(arr,3,sizeof(int),compare);

    printf("%d",arr[1]);

    return 0;
}
