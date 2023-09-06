#include<stdio.h>
#include<stdlib.h>

int compare(const void* a,const void* b)
{
    return *(int *)a - *(int *)b;
}

int BS(int *arr,int N,int target)
{
    int min = 0;
    int max = arr[N-1];
    int mid;
    long long sum;
    int result = 0;

    while(min <= max)
    {
        sum = 0;
        mid = (min+max)/2;
        
        for(int t=0; t<N; t++)
        {
            if(arr[t] - mid >= 0) {
                sum += (arr[t] - mid);
            }
        }
        if(sum >= target)
        {
            result = mid;
            min = mid + 1;
        }
        else
        {
            max = mid - 1;
        }
    }

    return result;

}

int main(void)
{
    int N,M;
    scanf("%d %d",&N,&M);

    int arr[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
    }

    qsort(arr,N,sizeof(int),compare);

    int res = BS(arr,N,M);

    printf("%d",res);

    return 0;
}
