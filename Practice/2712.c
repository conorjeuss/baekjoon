#include<stdio.h>
#include<string.h>
int main(void)
{
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        int a;
        char c[5];
        float res;

        scanf("%d %s",&a,&c);

        if(c == "kg") {
            res = a * 22046 / 10000;
            printf("%.4f lb",res); 
        }
        else if(c == "lb")
        {
            res = res * 4536 / 10000; //float 나 double형은 실수곱셈이된다
            printf("%.4f kg",res);
        }
        else if(c == "l")
        {
            res = res * 2642 / 10000;
            printf("%.4f g",res);
        }
        else if(c == "g")
        {
            res = res * 37854 / 10000;
            printf("%.4f l",res);
        }
 
    }

    return 0;
}
