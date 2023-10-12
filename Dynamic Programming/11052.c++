#include<iostream>
#include<vector>
#include<algorithm> //max , min;
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    vector<int> arr(N+1); 
    vector<int> dp(N+1,0);

    for(int i=1; i<=N; i++)
    {
        cin >> arr[i];
    }


    for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=i; j++)
        {
            dp[i] = max(dp[i],dp[i-j] + arr[j]);
        }
    }

    cout << dp[N];

    return 0;
}
