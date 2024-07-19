#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n;
vector<int> arr;
vector<int> new_arr;

void change_new(int res_len,int target)
{
    int min_ind = 0;
    int max_ind = res_len - 1;
    int change_ind = res_len; //구해야하는 값 --> 타겟값보다 큰 수 중 가장 작은 값의 인덱스

    while(min_ind <= max_ind)
    {
        int mid_ind = (min_ind + max_ind) / 2;

        if(new_arr[mid_ind] > target) {
            change_ind = mid_ind;
            max_ind = mid_ind - 1;
        }
        else if(new_arr[mid_ind] < target) {
            min_ind = mid_ind + 1;
        }
        else if(new_arr[mid_ind] == target) {
            new_arr[mid_ind] = target;
            return;
        }
    }

    new_arr[change_ind] = target;
}

int main(void)
{
    cin >> n;
    arr.resize(n); //n을 받은후에 arr과 new_arr의 공간을 정의해주어야함 이코드 두줄이 없으면 OutOfBounds에러가 뜸.
    new_arr.resize(n);

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    new_arr[0] = arr[0];

    int res_len = 1;

    for(int i=1; i<n; i++) {
        if(arr[i] > new_arr[res_len-1]) {
           new_arr[res_len] = arr[i];
           res_len++;
        }
        else {
            change_new(res_len,arr[i]);
        }
    }

    cout << res_len;
    

    return 0;
}
