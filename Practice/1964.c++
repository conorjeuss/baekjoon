#include<iostream>
using namespace std;
int main(void)
{
    int n;
    cin >> n;

    long long res_1 = 0;
    long long res_2 = 0;

    for(int i=1; i<=n; i++)
    {
        res_1 = res_1 + (i * 5);
    }

    for(int j=2; j<=n; j++)
    {
        res_2 = res_2 + ((j*2) - 1);
    }

    long long res = (res_1 - res_2) % 45678;

    cout << res;
    return 0;
}
