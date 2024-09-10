#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<math.h>
using namespace std;

bool compare(const int& a, const int& b) //오름차순 정렬
{
    return a < b; // a <= b로 해두면 틀림 --> 성능 저하가 일어날 수 있음.
}

int main(void)
{
    int N;
    cin >> N;

    vector<int> arr_time(N);

    for(int i=0; i<N; i++)
    {
        cin >> arr_time[i];
    }

    sort(arr_time.begin(),arr_time.end(),compare);

    int sum = 0;
    int sum2 = 0;
    for(int i=0; i<N;i++) {
        sum2 = sum2 + arr_time[i];
        sum += sum2;
    }

    cout << sum;

    return 0;
}

//그리디 알고리즘 : 작은수부터 선택하여 합을 구한다.
