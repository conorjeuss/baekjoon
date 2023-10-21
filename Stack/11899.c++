#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(void)
{
    string s;
    cin >> s;

    int len = s.length();

    stack<char> st;

    int cnt = 0;
    for(int i=0; i<len; i++)
    {
        if(s[i] == '(') {
            st.push(s[i]);
        }
        else if(s[i] == ')')
        {
            if(st.empty())
            {
                cnt++;
            }
            else {
                st.pop();
            }
        }
    }

    cnt = cnt + st.size();

    cout << cnt;
    return 0;
}
