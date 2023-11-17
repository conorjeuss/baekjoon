#include<iostream>
#include<vector>
using namespace std;

void backtracking(int N,int M,vector<int> &res_arr)
{
    if(res_arr.size() == M) {
        for(int num : res_arr) {
            cout << num << " ";
        }
        cout << "\n";
        return;
    }

    int k = 1;
    if(!res_arr.empty())
    {
        k = res_arr.back();
    }

    for(int i=k; i<=N; i++)
    {
        res_arr.push_back(i);
        backtracking(N,M,res_arr);
        res_arr.pop_back();
    }

}

int main(void)
{
    int N,M;
    cin >> N >> M;

    vector<int> res_arr;
    backtracking(N,M,res_arr);

    return 0;
}
