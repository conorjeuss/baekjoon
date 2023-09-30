#include<stdio.h>
int main(void)
{
    int a,b,c,d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);

    int sum = 0;
    sum = a+b+c+d;

    int res_h = sum / 3600;
    int res_m = (sum % 3600) / 60;
    int res_s = (sum % 3600) % 60;

    printf("%d\n%d",res_m,res_s);

    return 0;
}
