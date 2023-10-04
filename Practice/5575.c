#include<stdio.h>
int main(void)
{
    for(int i=0; i<3; i++)
    {
        int hour,min,sec;
        int work_h,work_m,work_s;
        scanf("%d %d %d %d %d %d",&hour,&min,&sec,&work_h,&work_m,&work_s);

        int res_h,res_m,res_s;
        int total1 = hour * 3600 + min * 60 + sec;
        int total2 = work_h * 3600 + work_m * 60 + work_s;

        int res = total2 - total1;

        res_h = res / 3600;
        res_m = (res % 3600) / 60;
        res_s = (res % 3600) % 60;

        printf("%d %d %d\n",res_h,res_m,res_s);

    }
    return 0;
}
