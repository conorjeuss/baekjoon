#include<iostream>
#include<vector>
using namespace std;

void change_value(vector<int> &arr_res,int value,int curr_len)
{
    //value값보다 작은거나 같은 것 중에서 큰 것.
    int min = 0;
    int max = curr_len - 1;

    int max_index = 0;

    while(min <= max)
    {
        int mid = (min + max)/2;
        if(arr_res[mid] > value)
        {
            min = mid + 1;
        }
        else if(arr_res[mid] <= value)
        {
            max_index = mid;
            max = mid - 1;
        }
    }

    arr_res[max_index] = value;
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
        if(arr_n[i] < arr_res[curr_len - 1]) {
            arr_res[curr_len] = arr_n[i];
            curr_len++;
        }
        else {
            change_value(arr_res,arr_n[i],curr_len);
        }
    }

    cout << curr_len;
    
    return 0;
}
