#include<iostream>
using namespace std;

int main(void)
{
    int test;
    cin >> test;

    while(test--)
    {
        int N;
        cin >> N;

        int res = 0;
        for(int i=1; i<=N; i++)
        {
            int sum = 0;
            for(int j=1; j<=i+1; j++)
            {
                sum += j;
            }
            int a = i * sum;
            res += a;
        }
        cout << res << endl;
    }
}
