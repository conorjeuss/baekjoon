#include<iostream>
#include<vector>
using namespace std;

void change(vector<int>& arr_new,int target,int& len)
{
    int min = 0;
    int max = len - 1;

    int min_index = 0; //target값보다 크거나 같아야함. 그중가장작은수

    while(min <= max)
    {
        int mid = (min + max)/2;
        if(arr_new[mid] > target)
        {
            min_index = mid;
            max = mid - 1;
        }
        else if(arr_new[mid] < target)
        {
            min = mid + 1;
        }
        else if(arr_new[mid] == target)
        {
            arr_new[mid] = target;
            return;
        }
    }

    arr_new[min_index] = target;

}

int main(void)
{
    int n;
    cin >> n;

    vector<int> arr(n,0);
    vector<int> arr_new(n);

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    arr_new[0] = arr[0];
    int res_len = 1;
    for(int i=1; i<n; i++)
    {
        if(arr[i] > arr_new[res_len-1]) {
            arr_new[res_len] = arr[i];
            res_len++;
        }
        else if(arr[i] <= arr_new[res_len-1]) {
            change(arr_new,arr[i],res_len);
        }
    }

    cout << res_len;

    return 0;
}
