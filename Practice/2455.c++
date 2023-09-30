#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
    int arr[4][2];
    int num[4];

    int max = 0;
    int sum = 0;
    for(int i=0; i<4; i++)
    {
        for(int j = 0; j<2; j++)
        {
            cin >> arr[i][j];

            if(j == 0) {
                sum -= arr[i][j];
            }
            else if(j == 1) {
                sum += arr[i][j];
            }
        }
        num[i] = sum;
        if(num[i] > max) {
            max = num[i];
        }
    }

    cout << max;

    return 0;
}
