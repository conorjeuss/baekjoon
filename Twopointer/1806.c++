#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
    int N,M;
    cin >> N >> M;

    vector<int> arr(N);

    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    }

    int right = 0;
    int left = 0;
    int min_len = N;
    int sum = 0;
    bool check = false;

    while(!(left == N && right == N))
    {
        if(sum < M && right < N) {
            sum += arr[right];
            right++;
        }
        else {
            sum -= arr[left];
            left++;
        }

        if(sum >= M) {
            check = true;
            int curr_len = right - left ; // right는 한칸 오른쪽에있기 때문에 r - l + 1 에서 -1을해줘야한다.
            if(curr_len < min_len) {
                min_len = curr_len;
            }
        }
    }

    if(check == true) {
        cout << min_len << endl;
    }
    else {
        cout << "0";
    }
    return 0;
}
