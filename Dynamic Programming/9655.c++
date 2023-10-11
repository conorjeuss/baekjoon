#include<iostream>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    bool dp[1001];

    dp[1] = true;
    dp[2] = false;
    dp[3] = true;

    for(int i=4; i<=N; i++)
    {
        dp[i] = !dp[i-1] || !dp[i-3];
    }

    if(dp[N] == true) {
        cout << "SK\n";
    }
    else {
        cout << "CY\n";
    }
    return 0;
}
