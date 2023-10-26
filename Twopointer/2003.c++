#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
    int N,M;
    cin >> N >> M;

    vector<int> arr_N(N);

    for(int i=0; i<N; i++)
    {
        cin >> arr_N[i];
    }
    
    int cnt_res = 0;
    
    int right_pointer;
    int left_pointer;

    right_pointer = 0;
    left_pointer = 0;
    int sum = 0;

    while(!(left_pointer == N && right_pointer == N))
    {
        if(sum < M && right_pointer < N) {
            sum += arr_N[right_pointer];
            right_pointer++;
        }
        else {
            sum -= arr_N[left_pointer];
            left_pointer++;
        }

        if(sum == M) {
            cnt_res++;
        }
    }

    cout << cnt_res << endl;

    return 0;
}
