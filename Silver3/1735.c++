#include<iostream>
#include<algorithm>

using namespace std;

// 최대공약수를 구하는 함수
int gcd(int a, int b) {
    if(b == 0) return a;
    else return gcd(b, a % b);
}

int main(void)
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    // 분수의 합 계산
    int res_son = (a * d) + (b * c);
    int res_mom = b * d;

    // 최대공약수 구하기
    int common_gcd = gcd(res_son, res_mom);
    
    // 기약분수 형태로 변환
    res_son /= common_gcd;
    res_mom /= common_gcd;

    cout << res_son << ' ' << res_mom;

    return 0;
}

---------------------------------------------------------
  //기약분수로 표현하기위해서 최대공약수로 나누는 알고리즘 활용
