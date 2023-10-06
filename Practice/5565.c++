#include<iostream>
using namespace std;

int main(void)
{
    int arr[10] = {0,};
    int total;
    int sum = 0;
    for(int i=0; i<10; i++)
    {
        cin >> arr[i];
        if(i==0) {
            total = arr[i];
        }
        else {
            sum = sum + arr[i];
        }
    }

    int res = total - sum;

    cout << res;
    return 0;
}
