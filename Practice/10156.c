#include<stdio.h>
int main(void)
{
    int k,n,m;
    scanf("%d %d %d",&k,&n,&m);

    int need_money = k * n;
    int get_m;

    if(need_money <= m) {
        get_m = 0;
    }
    else {
        get_m = need_money - m;
    }

    printf("%d\n",get_m);

    return 0;
}
