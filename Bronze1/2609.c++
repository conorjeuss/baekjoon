#include <iostream>
using namespace std;

// 최대 공약수(GCD)를 계산하는 함수
int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;  // 두 자연수 입력 받기

    int GCD = gcd(a, b);  // 최대 공약수 계산
    int LCM = (a * b) / GCD;  // 최소 공배수 계산

    cout << GCD << endl;  // 최대 공약수 출력
    cout << LCM << endl;  // 최소 공배수 출력

    return 0;
}
