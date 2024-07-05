#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int arr_cnt[100001] = {0,};


int main(void)
{
    int n,k;
    cin >> n >> k;

    vector<int> arr(n,0);
    int max_length = 1;

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int st=0; //index값으로 계산
    int en=0;

    arr_cnt[arr[0]] = 1;

    while(en < n-1) {
        if(arr_cnt[arr[en+1]] + 1 > k) { //en이 진행이 안될때.
            arr_cnt[arr[st]]--;
            st++;
        }
        else {
            en++;
            arr_cnt[arr[en]]++;
            max_length = max(max_length,(en - st + 1));
        }

    }

    cout << max_length;

    return 0;
}
