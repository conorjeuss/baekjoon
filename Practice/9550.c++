#include<iostream>
using namespace std;
int main(void)
{
    int test_case;
    cin >> test_case;

    while(test_case--)
    {
        int N,K;
        cin >> N >> K;

        int res = 0;

        for(int i=0; i<N; i++)
        {
            int num = 0;
            cin >> num;

            res = res + (num / K);
        }

        cout << res << endl;


    }
    return 0;
}
