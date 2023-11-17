#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int res_function(int s,int a)
{
    int t = 1;
    while(1)
    {
        if(s * t > a) {
            return a - (s*(t-1));
        }
        else if(s*t == a) {
            return s*t - a;
        }
        else {
            t++;
        }
    }
}

int main(void)
{
    int num;
    cin >> num;

    int sum = 0;
    while(num--)
    {
        int student;
        int apple;

        cin >> student >> apple;

        int res = (res_function(student,apple));

        sum = sum + res;
    }

    cout << sum;
    return 0;
}
