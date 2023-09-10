#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
    
    printf("start\n");

    int test_case;
    cin >> test_case;

    for(int i=0; i<test_case; i++)
    {
        int n;
        cin >> n;
        vector<int> arr_n(n,0);
        for(int j=0; j<n; j++)
        {
            cin >> arr_n[j];
        }

        int goal;
        cin >> goal;

        //dp배열 생성
        vector<int> dp(goal+1,0);
        dp[0] = 1;
        for(int j=0; j<n; j++)
        {
            for(int q=arr_n[j]; q<=goal; q++)
            {
                dp[q] = dp[q] + dp[q - arr_n[j]];
            }
        }

        cout << dp[goal] << endl;

    }
    return 0;
}
