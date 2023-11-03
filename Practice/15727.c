#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);

    int res;
    if(n % 5 == 0) {
        res = n / 5;
    }
    else{
        res = (n / 5) + 1;
    }

    printf("%d\n",res);
    return 0;
}
