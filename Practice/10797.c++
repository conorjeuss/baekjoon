#include<iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    int arr[5] = {0,};
    int cnt = 0;
    for(int i=0; i<5; i++)
    {
        cin >> arr[i];
        if(arr[i] == n) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}
