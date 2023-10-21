#include<iostream>
#include<algorithm>
using namespace std;

int main(void)
{
    int N;
    cin >> N;
    
    while(N--)
    {
        string password;
        cin >> password;

        int len = password.length();

        if(len >= 6 && len <= 9) {
            cout << "yes\n";
        }
        else {
            cout << "no\n";
        }
    }

    return 0;
}
