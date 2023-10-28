#include<iostream>
using namespace std;
int main(void)
{
    int n;
    cin >> n;

    while(n--)
    {
        int a;
        cin >> a;
        int t = a;
        int curr_len = 0;
        while(!t==0)
        {
            t = t / 10;
            curr_len++;
        }

        int a2 = a * a;
        int res = 0;
        int k = 1;

        for(int i=0; i<curr_len; i++)
        {
            res = res + (a2 % 10) * k;
            a2 = a2 / 10;
            k = k * 10;
        }

        if(res == a)
        {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}
