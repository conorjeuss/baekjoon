#include<stdio.h>
#include<stdlib.h>

int compare(const void* a, const void* b)
{
    return (*(int *)a - *(int *)b);
}

void card_check(int target, int* arr_n, int N)
{
    int min = 0;
    int max = N-1;
    int mid;

    while(max >= min)
    {
        mid = (min + max)/2;

        if(target > arr_n[mid]) {
            min = mid + 1;
        }
        else if(target < arr_n[mid]) {
            max = mid - 1;
        }
        else {
            printf("1 ");
            return;
        }
    }

    printf("0 ");
}

int main(void)
{

    printf("start\n");
    //첫번째 배열
    int N;
    scanf("%d",&N);

    int* arr_n = (int*)malloc(sizeof(int) * N);

    for(int i=0; i<N; i++)
    {
        scanf("%d",&arr_n[i]);
    }

    qsort(arr_n,N,sizeof(int),compare);

    //2번째 타겟 배열
    int M;
    scanf("%d",&M);

    int* arr_m = (int*)malloc(sizeof(int) * M);

    for(int j=0; j<M; j++)
    {
        scanf("%d",&arr_m[j]);
    }

    for(int j=0; j<M; j++)
    {
        card_check(arr_m[j],arr_n,N);
    }

    free(arr_n);
    free(arr_m);
    return 0; 
}
