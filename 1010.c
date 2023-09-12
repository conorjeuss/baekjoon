#include<stdio.h>
int main(void)
{
    int N,M;
    int c;
    scanf("%d",&c);

    for(int i=0; i<c; i++)
    {
        scanf("%d %d",&N,&M);
        long long res = 1;
        int a = 1;
        for(int j = M; j>M-N; j--)
        {
            res = res * j;
            res = res / a;
            a++;
        }
        // long long a = 1;
        // for(int k = N; k>0; k--)
        // {
        //     a *= k;
        // }
        //값이 longlong범위를 넘는 오버플로우가 발생 할 수도 있다. --> 곱하는 즉시나눠줘야함
        //나누어줄때 1부터 시작해서 커져야지 제대로된 결과값이 나옴.

        printf("%lld\n",res);
    }
    return 0;
}
