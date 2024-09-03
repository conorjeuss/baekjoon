#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<math.h>
using namespace std;

using ll = long long;

ll fun(ll a, ll b, ll c)
{
    if(b == 1) return a % c;
    
    ll val = fun(a,b/2,c);
    val = val * val % c;

    if(b%2==0) return val;
    else return val * a % c; //b/2로나누었을떄 b가 홀수면 a가 한번더 곱해지지 않은 것이다. 따라서 결과값에 a를 곱한후 c로나눈 나머지를 계산해준다.
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll a,b,c;
    cin >> a >> b >> c;

    ll res = fun(a,b,c);
    cout << res;
    
    return 0;
}

//재귀함수를 이용한 모듈러 연산. 값이 오버플로우가 나지 않게 나머지값으로 계산하는 방식
