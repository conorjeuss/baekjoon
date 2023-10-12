#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    bool win[1001];

    win[1] = true;
    win[2] = false;
    win[3] = true;
    win[4] = true;

    for(int i=5; i<=N; i++)
    {
        win[i] = !win[i-1] || !win[i-3] || !win[i-4];
    }

    if(win[N]) {
        cout << "SK\n";
    }
    else {
        cout << "CY\n";
    }
    return 0;
}
