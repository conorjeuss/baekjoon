#include<stdio.h>
int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);

    int res = (a * (b-1)) + 1;

    printf("%d",res);

    return 0;
}
