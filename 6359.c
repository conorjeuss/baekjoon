#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    //1은 열려있는거 0은 닫힌거
    int test;
    scanf_s("%d",&test);

    for(int i=0; i<test; i++)
    {
        int n,t;
        scanf_s("%d",&n);
        t = 2;
        
        //int *arr_check = (int*)malloc(sizeof(int) * n);
        int arr_check[2][n];

        for(int j=0; j<n; j++)
        {
            arr_check[0][j] = j+1;
            arr_check[1][j] = 1;
        }

        while(t <= n)
        {
            for(int j=0; j<n; j++)
            {
                if(arr_check[0][j] % t == 0)
                {
                    if(arr_check[1][j] == 1) {
                        arr_check[1][j] = 0;
                    }
                    else if(arr_check[1][j] == 0) {
                        arr_check[1][j] = 1;
                    }
                }
            }
            t++;
        }


        int cnt = 0;

        for(int i=0; i<n; i++)
        {
            if(arr_check[1][i] == 1)
            {
                cnt += 1;
            }
        }

        printf("%d\n",cnt);

        //free(arr_check);    
    }


    
    return 0;
}