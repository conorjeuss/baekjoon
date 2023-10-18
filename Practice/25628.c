#include<stdio.h>

int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);

    int res_a = a / 2;
    int res_b = b / 1;

    int res = (res_a < res_b) ? res_a : res_b;

    printf("%d",res);
  
    return 0;
}
