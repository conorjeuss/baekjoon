#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    vector<int> arr(N,0);
    stack<int> s;

    int res = 0;
    int cnt = 1;
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
        if(arr[i] == 1)
        {
            s.push(cnt);
            res = res + s.top();
            cnt++;
        }
        else if(arr[i] == 0)
        {
            cnt = 1;
            while(!s.empty())
            {
                s.pop();
            }
        }
    }

    cout << res;

    return 0;
}
