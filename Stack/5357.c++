#include<iostream>
#include<stack>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
    int t;
    cin >> t;
    cin.ignore();

    while(t--)
    {
        string word;
        getline(cin,word);

        stack<char> st;
        st.push(word[0]);
        int len = word.length();
        vector<char> res;

        int len2 = 0;
        for(int i=1; i<len; i++)
        {
            if(word[i] != st.top())
            {
                st.push(word[i]);
                res.push_back(word[i]);
                len2++;
            }
        }

        cout << word[0];
        for(int j=0; j<len2; j++)
        {
            cout << res[j];
        }

        cout << "\n";

    }
    return 0;
}
