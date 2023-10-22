#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int N,X;
    scanf("%d %d",&N,&X);

    int* arr = (int*)malloc(sizeof(int) * N);

    for(int i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
    }

    int min_cost = (arr[0] + arr[1]) * X;

    for(int i=1; i<N-1; i++)
    {
        int res_1;
        int res_2;
        res_1 = X * arr[i];
        res_2 = X * arr[i+1];

        int total = res_1 + res_2;
        if(total < min_cost) {
            min_cost = total;
        }
    }    

    printf("%d",min_cost);
    return 0;
}
