#include<iostream>
#include<string>
#include<vector> //push_back
#include<string>
#include<cctype> //to lower, to upper
#include<algorithm> //trasform
#include<sstream>
#include<unordered_set>
#include<math.h>
using namespace std;

int func(int n,int &cnt)
{
    int sum = 1;
    int len = 0;
    while(n>0)
    {
        sum = sum * (n%10);
        len++;
        n = n / 10;
    }
    cnt++;

    if(len > 1) {
        return func(sum,cnt);
    }
    else {
        return cnt;
    }
}

int main(void)
{
    int n;
    cin >> n;

    int cnt = 0;
    func(n,cnt);

    cout << cnt-1;
    
    return 0;
}
