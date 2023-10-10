#include<stdio.h>
#include<math.h>
int main(void)
{
    int N;
    scanf("%d",&N);

    for(int i=0; i<N; i++)
    {
        int num;
        scanf("%d",&num);

        int res = abs(num);
        if(res % 2 == 0) {
            printf("%d is even\n",num);
        }
        else {
            printf("%d is odd\n",num);
        }

    }
    return 0;
}
