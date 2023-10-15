#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
    int N;
    scanf("%d",&N);

    int* arr = (int*)malloc(sizeof(int) * N);

    for(int i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
    }

    long long res = 0;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            int a = abs(arr[i] - arr[j]);
            res = res + a;
        }
    }

    printf("%lld",res);

    return 0;
}
