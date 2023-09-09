#include<iostream>
int main(void)
{
    //std::cout << "start" << std::endl;
    int T;
    scanf("%d",&T);

    for(int t = 0; t < T; ++t)
    {
        int N;
        long long K = 0;
        scanf("%d",&N);

        K = (long long) N * N;  
        printf("%lld\n",K);
    }
    //시간초과로 인한 입출력 바꿈 scanf,printf --> 입출력 시간 단축가능
    return 0;
}
