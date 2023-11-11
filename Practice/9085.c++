#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
    int test;
    cin >> test;

    for(int i=0; i<test; i++)
    {
        int num;
        cin >> num;

        vector<int> arr(num,0);
        int sum = 0;
        for(int j=0; j<num; j++)
        {
            cin >> arr[j];
            sum += arr[j];
        }

        cout << sum << "\n";

    }

    return 0;
}
