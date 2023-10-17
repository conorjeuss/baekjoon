#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    while(N--)
    {
        string s;
        cin >> s;

        stack<int> st; //stack을 while문안에 생성하여 테스트케이스 각각마다 stack을 초기화 시켜줌

        int len = s.length();

        bool check = true;

        for(int i=0; i<len; i++)
        {
            if(s[i] == '(')
            {
                st.push(0);
            }
            else if(s[i] == ')')
            {
                if(st.empty()) {
                    check = false;
                    break;
                }
                st.pop();
            }
        }

        if(st.empty() && check == true) {
            cout << "YES\n";
        }
        
        else {
            cout << "NO\n";
        }
    }
    return 0;
}
