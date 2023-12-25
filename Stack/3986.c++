#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void check_function(string word,int &good_word)
{
    //top과 같으면 pop해주고 아니면 push해주기

    stack<char> st;
    //st.push(word[0]);

    int len = word.length();

    for(int i=0; i<len; i++)
    {
        if(!st.empty() && word[i] == st.top())
        {
            st.pop();
        }
        else {
            st.push(word[i]);
        }
    }

    if(st.empty())
    {
        good_word++;
    }
}

int main(void)
{
    int test_case;
    cin >> test_case;

    int good_word = 0;
    while(test_case--)
    {
        string word;
        cin >> word;

        check_function(word,good_word);
    }

    cout << good_word;
    
    return 0;
}
