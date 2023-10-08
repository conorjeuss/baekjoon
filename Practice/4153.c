#include<stdio.h>
#include<math.h>
int main(void)
{
    while(1)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);

        if(a == 0 && b == 0 && c == 0) {
            break;
        }
        int max_num = (a > b ? a : b);
        int max_res = (max_num > c ? max_num : c);

        if(max_res == a) {
            long sum = pow(b,2) + pow(c,2);
            if(sum == pow(a,2)) {
                printf("right\n");
            }
            else {
                printf("wrong\n");
            }
        }
        else if(max_res == b) {
            long sum = pow(a,2) + pow(c,2);
            if(sum == pow(b,2)) {
                printf("right\n");
            }
            else {
                printf("wrong\n");
            }
        }
        else if(max_res == c) {
            long sum = pow(a,2) + pow(b,2);
            if(sum == pow(c,2)) {
                printf("right\n");
            }
            else {
                printf("wrong\n");
            }
        }
           
    }
    return 0;
}
