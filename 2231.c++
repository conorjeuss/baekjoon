#include<iostream>
using namespace std;

int main(void)
{
    cout << "start\n";

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        int k = i;
        int k2 = k; // k를 k2라는 다른 변수로 저장하여 k값을 보존시킨다
        int sum =0;

        while(k2>0)
        {
            sum = sum + k2%10;
            k2 = k2/10; //고려하지 못한점 : k /= 10; 으로 쓰게되면 k2라는 변수가 없을 때, while문안에서 k값이 바뀌게 되어 원하는 결과가 도출되지 않는다.
        }

        if(k + sum == n) {
            cout << k << endl;
            break;
        }
        else if(i == n) {
            cout << "0";
        }

    }

    return 0;
}
