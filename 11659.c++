#include<iostream>
#include<vector>
using namespace std;

//cin,cout으로 하니깐 시간초과가 떴다. --> scanf,printf형식으로 입출력을 바꾸니 통과됨
//    ios_base::sync_with_stdio(false);  // 입출력 속도 향상코드 (그러나 이 코드를 쓰면 c형식의 입출력코드 scanf,printf와 같이 쓰면안됨)
//    cin.tie(NULL);
//    cin.tie(NULL); 
int main(void)
{   
    int N,M;
    //cin >> N >> M;
    scanf("%d %d",&N,&M);

    vector<int> arr(N); //동적할당

    vector<int> dp(N+1,0); //dp할당
    dp[0] = 0;

    for(int i=0; i<N; i++)
    {
        //cin >> arr[i];
        scanf("%d",&arr[i]);
        dp[i+1] = dp[i] + arr[i];
    }

    for(int j=0; j<M; j++)
    {
        int min,max;
        //cin >> min >> max;
        scanf("%d %d",&min,&max);

        int res;
        res = dp[max] - dp[min - 1];

        //cout << res << endl;
        printf("%d\n",res);
    }

    return 0;
}
