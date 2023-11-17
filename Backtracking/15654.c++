#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void backtracking(int N, int M, vector<int> arr,vector<int> &res_arr)
{
    if(res_arr.size() == M)
    {
        for(int num : res_arr)
        {
            cout << num << " ";
        }
        cout << "\n";
    }

    for(int i=0; i<N; i++) {
        if(find(res_arr.begin(),res_arr.end(),arr[i]) == res_arr.end())
        {
            res_arr.push_back(arr[i]);
            backtracking(N,M,arr,res_arr);
            res_arr.pop_back();
        }
    }
}

int main(void)
{
    int N,M;
    cin >> N >> M;

    vector<int> arr(N,0);
    vector<int> res_arr; //출력을 위한 벡터값.

    for(int i=0; i<N; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(),arr.end()); //오름차순으로 정렬
    
    backtracking(N,M,arr,res_arr);

    return 0;
}
