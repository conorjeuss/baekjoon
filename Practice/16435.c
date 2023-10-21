#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b) {
    return ( *(int*)a - *(int*)b );
}

int main(void)
{
    int N,L;
    scanf("%d %d",&N,&L);

    int* arr = (int*)malloc(sizeof(int) * N);

    for(int i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
    }

    qsort(arr,N,sizeof(int),compare);

    for(int i=0; i<N; i++)
    {
        if(arr[i] <= L) {
            L++;
        }
    }

    printf("%d",L);

    return 0;
}
