#include<iostream>
#include<algorithm>
using namespace std;

int main(void)
{
    int test_case;
    cin >> test_case;

    while(test_case--)
    {
        int N,M;
        cin >> N >> M;

        int total_legs = (2 * M);
        int broken_legs = total_legs - N;

        int res_chik = M - broken_legs;

        cout << broken_legs << " " << res_chik << "\n";
    }

    return 0;
}
