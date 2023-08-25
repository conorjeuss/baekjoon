#include<stdio.h>
int main()
{
    printf("start\n");

    int n;
    scanf("%d",&n);

    int use[100] = {0,};

    for(int i=0; i<n; i++)
    {
        int a;
        scanf("%d",&a);

        use[a-1]++;
    }

    int cnt = 0;
    for(int j=0; j<100; j++)
    {
        if(use[j] > 1) {
            cnt = cnt + (use[j] - 1);
        }
    }

    printf("%d",cnt);

    return 0;
}
