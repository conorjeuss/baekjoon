#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long N;
    cin >> N;

    long long length = 0;  // 총 길이
    long long digit = 1;   // 현재 자리수
    long long start, end;  // 현재 자리수의 시작과 끝

    while (true) {
        end = pow(10, digit) - 1;  // 현재 자리수의 마지막 수 (예: 9, 99, 999, ...)
        start = pow(10, digit - 1);  // 현재 자리수의 첫 수 (예: 1, 10, 100, ...)

        
        if (N <= end) { //N의 자리수에서 첫번째 수부터 N까지의 갯수 * 현재자리수
            length += (N - start + 1) * digit;
            break;
        } else { //N이 현재 자리수보다 클때 --> 하나 작은 자리수를 모두 더해주기
            length += (end - start + 1) * digit;
        }

        digit++;
    }

    cout << length << endl;
    return 0;
}
