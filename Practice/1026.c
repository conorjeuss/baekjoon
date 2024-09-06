#include<stdio.h>
#include<stdlib.h>

//오름차순
int compare(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

//내림차순
int compare2(const void* a, const void* b)
{
    return (*(int*)b - *(int*)a);
}

int main(void)
{
    int n;
    scanf_s("%d",&n);

    int *arr = (int*)malloc(sizeof(int) * n);
    int *arr2 = (int*)malloc(sizeof(int) * n);

    for(int i=0; i<n; i++)
    {
        scanf_s("%d",&arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        scanf_s("%d",&arr2[i]);
    }

    qsort(arr,n,sizeof(int),compare);
    qsort(arr2,n,sizeof(int),compare2);

    int result = 0;

    for(int i=0; i<n; i++)
    {
        int k=0;
        k = arr[i] * arr2[i];
        result += k;
    }

    printf("%d\n",result);

    free(arr,arr2);

    return 0;
}
