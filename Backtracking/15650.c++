#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void backtrack_algorithm(int N, int M, vector<int> &arr)
{
    if(arr.size() == M) {
        for(int num : arr) {
            cout << num << " ";
        }
        cout << "\n";
        return;
    }
    
    int start = 1;
    if (!arr.empty()) {
        start = arr.back() + 1;
    }

    for(int i = start; i <= N; i++)
    {
        if(find(arr.begin(), arr.end(), i) == arr.end())
        {
            arr.push_back(i);
            backtrack_algorithm(N, M, arr);
            arr.pop_back();
        }
    }
}

int main(void)
{
    int N, M;
    cin >> N >> M;

    vector<int> arr;
    backtrack_algorithm(N, M, arr);

    return 0;
}
