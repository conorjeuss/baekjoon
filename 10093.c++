#include <iostream>

using namespace std;

int main() {
    long long A, B;

    cin >> A >> B;

    //A와 B중 뭐가 더 큰지 모름 ==> swap을 이용하여 무조건 B가 크도록 설정
    if (A > B) {
        swap(A, B);
    }

    if(A == B) {
        cout >> "0" >> endl;
    }
    else {
        cout << (B - A - 1) << endl;
    }

    for (long long i = A + 1; i < B; ++i) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
