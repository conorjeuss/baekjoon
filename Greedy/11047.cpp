#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void)
{
    int n,k;
    cin >> n >> k;

    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int total_m = 0;
    int c = n-1;
    int cnt = 0;
    while(1)
    {
        if(total_m + arr[c] < k)
        {
            total_m += arr[c];
            cnt++;
        }
        else if(total_m + arr[c] > k){
            if(c > 0) c--;
            else break;
        }
        else {
            total_m += arr[c];
            cnt++;
            break;
        }
    }

    cout << cnt;

}

//Greedy알고리즘 --> 현재상황에서 최적의 선택을 하여 문제를 푸는 알고리즘
