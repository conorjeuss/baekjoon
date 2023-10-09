#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
    int s,k;
    cin >> s >> k;

    int num = s / k;
    vector<int> arr1(k,num);

    int diff_val = s - (num * k);

    for(int i=0; i<diff_val; i++)
    {
        arr1[i] += 1;
    }

    long long res = 1;

    for(int i=0; i<k; i++)
    {
        res = res * arr1[i];
    }

    cout << res;

    return 0;
}
