#include<iostream>
#include<vector>
using namespace std;

void change_arr(vector<int> &arr_res,int value,int curr_len)
{
    int min = 0;
    int max = curr_len - 1; //index값을 나타냄
    int mid;

    int min_index = 0;
    while(min <= max){
        mid = (min+max) / 2;

        if(arr_res[mid] >= value) {
            max = mid - 1;
            min_index = mid;
        }
        else {
            min = mid + 1;
        }
    }

    arr_res[min_index] = value;

}


int main(void)
{
    int n;
    cin >> n;

    vector<int> arr_n(n);
    vector<int> arr_res(n);

    for(int i=0; i<n; i++)
    {
        cin >> arr_n[i];
    }

    arr_res[0] = arr_n[0];
    int curr_len = 1;

    for(int i=1; i<n; i++)
    {
        if(arr_n[i] > arr_res[curr_len-1])
        {
            arr_res[curr_len] = arr_n[i];
            curr_len++;
        }
        else {
            change_arr(arr_res,arr_n[i],curr_len);
        }
    }

    cout << curr_len;

    return 0;
}
