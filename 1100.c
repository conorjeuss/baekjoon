#include<stdio.h>
int main(void)
{
    int arr_check[8][8]; //체스판

    //printf("start :\n");

    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            if(i % 2 == 0 && j % 2 == 0)
            {
                arr_check[i][j] = 1;
            }
            else if(i % 2 == 1 && j % 2 == 1)
            {
                arr_check[i][j] = 1;
            }
            else {
                arr_check[i][j] = 0;
            }
        }
    }

    char c[8][9];

    int cnt = 0;

    for(int i=0; i<8; i++)
    {
        scanf("%s", c[i]); // 문자열로 입력받기

        for(int j=0; j<8; j++)
        {
            //scanf_s("%c",c[i][j]);
            if(arr_check[i][j] == 1 && c[i][j] == 'F') {
                cnt++;
            }
        }
    }

    printf("%d",cnt);

    return 0;
}
