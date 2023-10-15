//정답이아님 그냥 알고리즘생각해서 짜본코드
#include<iostream>
#include<stack>
using namespace std;

int main(void)
{
    for(int k=0; k<3; k++)
    {
        stack<int> st;
        for(int i=0; i<8; i++)
        {
            int a;
            cin >> a;
            st.push(a);
        }

        int max_length = 1;
        int curr_length = 1;
        while(!st.empty()) 
        {
            int prev_num = st.top();
            
            st.pop();

            if(st.top() == prev_num) {
                curr_length++;
                max_length = max(max_length,curr_length);
            }
            else {
                curr_length = 1;
            }

        }
        cout << max_length << endl;
    }
    return 0;
}
