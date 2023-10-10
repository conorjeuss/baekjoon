#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    for(int i=0; i<N; i++)
    {
        int num;
        cin >> num;

        vector<int> arr(num,0);

        int sum_even = 0;
        int sum_odd = 0;
        for(int j=0; j<num; j++)
        {
            cin >> arr[j];
            if(arr[j] % 2 == 0) {
                sum_even += arr[j];
            }
            else {
                sum_odd += arr[j];
            }
        }

        if(sum_even > sum_odd) {
            cout << "EVEN\n";
        }
        else if(sum_even < sum_odd) {
            cout << "ODD\n";
        }
        else {
            cout << "TIE\n";
        }

    }
    return 0;
}
