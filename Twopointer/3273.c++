#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int sum;
int res_cnt = 0;

int two_pointer(vector<int> arr_n,int len,int target_val) {
    int left_index = 0;
    int right_index = len-1;
    
    while(left_index < right_index) {
        sum = arr_n[left_index] + arr_n[right_index];

        if(sum == target_val) {
            res_cnt++;
            left_index++;
            right_index--;
        }
        else if(sum > target_val) {
            right_index--;
        }
        else {
            left_index++;
        }
    }

    return res_cnt;
}

int main(void)
{
    int n;
    cin >> n;

    vector<int> arr_n(n);
    for(int i=0; i<n; i++)
    {
        cin >> arr_n[i];
    }

    int x;
    cin >> x;

    sort(arr_n.begin(),arr_n.end());

    //two pointer를 활용한 문제풀이
    int res = two_pointer(arr_n,n,x);

    cout << res;
    return 0;
}
