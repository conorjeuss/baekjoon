#include<iostream>
#include<string>
#include<vector> //push_back
#include<string>
#include<cctype> //to lower, to upper
#include<algorithm> //trasform
#include<sstream>
#include<unordered_set>
using namespace std;

bool check_function(int n)
{
    bool res = true;

    string number = to_string(n);

    int len = number.length();

    for(int i=0; i<len/2; i++)
    {
        if(number[i] != number[len-1-i])
        {
            res = false; //정답이 아님
        }
    }

    return res;
}


int main(void)
{
    int test_case;
    cin >> test_case;

    for(int i=0; i<test_case; i++)
    {
        string n;
        cin >> n;

        int num1,num2;
        num1 = stoi(n);

        reverse(n.begin(),n.end());
        num2 = stoi(n);

        int t = num1 + num2;

        if(check_function(t)) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }

    }

    return 0;
}
