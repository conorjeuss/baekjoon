#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<int> num(n,0);
    vector<int> result(n,-1);
    stack<int> st;

    for(int i=0; i<n; i++)
    {
        cin >> num[i];
    }

    for(int i=0; i<n; i++)
    {
        while(!st.empty() && num[st.top()] < num[i])
        {
            result[st.top()] = num[i];
            st.pop();
        }
        st.push(i);
    }

    for(int i=0; i<n; i++)
    {
        cout << result[i] << ' ';
    }
    return 0;
}
