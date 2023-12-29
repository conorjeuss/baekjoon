#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;

int main(void)
{
    stack<int> st;

    while(1)
    {
        string ln;
        getline(cin,ln);

        if(ln == "고무오리 디버깅 끝") {
            break;
        }

        if(ln == "문제") {
            st.push(1);
        }
        else if(ln == "고무오리" && !st.empty()) {
            st.pop();
        }
        else if(ln == "고무오리" && st.empty()){
            st.push(1);
            st.push(1);
        }

    }

    if(st.empty()) {
        cout << "고무오리야 사랑해\n";
    }
    else {
        cout << "힝구\n";
    }

    return 0;
}
