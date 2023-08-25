#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    printf("start\n");

    int n;
    scanf("%d",&n);

    int* arr = (int*)malloc(sizeof(int) * n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int max_size = arr[n-1];
    int cnt = 0;
    for(int i=n-1; i>=1; i--)
    {
        if(arr[i] > max_size) {
            max_size = arr[i];
        }

        if(arr[i] < arr[i-1] && arr[i-1] > max_size)
        {
            cnt++;
        }
        
    }

    printf("%d",cnt+1);


    free(arr);
    return 0;
}
