#include<stdio.h>
#include<stdlib.h>
int main(void)
{

    int n;
    scanf("%d",&n);

    //int arr_1[n];
    int* arr_1 = (int*)malloc(sizeof(int) * n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr_1[i]);
    }

    //int arr_2[n];
    int* arr_2 = (int*)malloc(sizeof(int) * n);

    int sum = 0;
    for(int j=1; j<=n; j++)
    {
        if(j==1)
        {
            arr_2[j-1] = arr_1[j-1];
        }

        else {
            sum = sum + arr_2[j-2];
            arr_2[j-1] = (j * arr_1[j-1]) - sum; 
        }
    }


    for(int i=0; i<n; i++)
    {
        printf("%d ",arr_2[i]);
    }

    free(arr_1);
    free(arr_2);

    return 0;
}
