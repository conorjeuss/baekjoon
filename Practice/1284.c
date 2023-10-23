#include<stdio.h>
#include<string.h>
int main(void)
{
    while(1)
    {
        int n;
        scanf("%d",&n);
        int k = n;

        if(n == 0) {
            break;
        }

        int total_len = 0;
        int len1 = 1;

        while(!k == 0)
        {
            int t = k % 10;
            if(t == 0) {
                total_len += 4; 
            }
            else if(t == 1) {
                total_len += 2;
            }
            else {
                total_len += 3;
            }
            k = k / 10;
            len1++;
        }
        total_len = total_len + len1;

        printf("%d\n",total_len);
    }
    return 0;
}
