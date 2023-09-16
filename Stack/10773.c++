#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(void)
{
    int K;
    cin >> K;

    stack<int> st;
    int cmd;
    int sum =0;
    for(int i=0; i<K; i++)
    {
        cin >> cmd;
        if(cmd != 0) {
            st.push(cmd);
            sum = sum + st.top();
        }
        else {
            sum = sum - st.top();
            st.pop();
        }
    }

    cout << sum << endl;
}
