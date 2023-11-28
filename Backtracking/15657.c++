#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void backtrack(int N,int M,vector<int> arr_og,vector<int> &arr_new)
{
    if(arr_new.size() == M)
    {
        for(int num : arr_new)
        {
            cout << num << " ";
        }
        cout << "\n";

        return;
    }

    int k;
    if(!arr_new.empty())
    {
        k = arr_new.back();
    }
    else if(arr_new.empty())
    {
        k = 1;
    }

    for(int i=0; i<N; i++)
    {
        if(arr_og[i] >= k) {
            arr_new.push_back(arr_og[i]);
            backtrack(N,M,arr_og,arr_new);
            arr_new.pop_back();
        }
    }
}

int main(void)
{
    int N,M;
    cin >> N >> M;

    vector<int> arr_og(N);
    vector<int> arr_new;

    for(int i=0; i<N; i++)
    {
        cin >> arr_og[i];
    }

    sort(arr_og.begin(),arr_og.end());
    //arr_og.erase(unique(arr_og.begin(), arr_og.end()), arr_og.end()); // 중복 제거

    backtrack(N,M,arr_og,arr_new);

    return 0;
}
