//set이라는 c++라이브러리를 통한 해결책

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main(void) {
    int A, B;
    cin >> A >> B;

    set<int> set_a, set_b; 

    int temp;
    for (int i = 0; i < A; ++i) {
        cin >> temp;
        set_a.insert(temp); //insert라는 함수는 원소를 넣어준다. //근데 특징이있음 1.정렬된 상태를 유지하면서 넣어줌 2.중복된 값은 넣지않음.
    }

    for (int i = 0; i < B; ++i) {
        cin >> temp;
        set_b.insert(temp);
    }

    int cnt = 0;
    for (const auto& elem : set_a) {
        if (set_b.find(elem) == set_b.end()) { //set_b.find(elem) set_a의 모든 원소에대해 b에서 찾아본다 그리고 find함수는 원소가 없을시 end()함수와 같은 이터레이터 값을 반환한다 따라서 set_b.end() 값과 동일한 이터레이터를 반환하면 찾지 못했다는것을 알 수 있다.
            cnt++;
        }
    }

    for (const auto& elem : set_b) {
        if (set_a.find(elem) == set_a.end()) {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}
