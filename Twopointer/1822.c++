#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int nA, nB;
    cin >> nA >> nB;

    vector<int> A(nA), B(nB);

    for (int i = 0; i < nA; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < nB; i++) {
        cin >> B[i];
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    vector<int> result;
    int i = 0, j = 0;

    while (i < nA && j < nB) {
        if (A[i] < B[j]) { // A의 원소가 B보다 작다는 것은 A에만 있다는 것이기 때문에 result에 넣어주어야함
            result.push_back(A[i]);
            i++;
        } else if (A[i] > B[j]) { //A의 원소가 B의 원소보다 크다고 하더라도 B의 다음원소들 중 A와 겹칠 수 있기때문에 result에 넣어줄 필요 X
            j++;
        } else { //A의 원소와 B의 원소가 같으면 result에 넣을 필요 X
            i++;
            j++;
        }
    }

    // 집합 A에 남은 원소 추가 --> 위에서 해결하지 못한 A의 남아있는 원소는 B에 있지않기 떄문에 result에 넣어준다.
    while (i < nA) {
        result.push_back(A[i]);
        i++;
    }

    cout << result.size() << "\n";
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}

//투포인터 기법으로 구현하면 O가 (n+m)의 값을 가지므로 훨씬 더 빠르고 효율적으로 문제를 풀 수 있음.
