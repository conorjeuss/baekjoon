#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> towers(n);
    for (int i = 0; i < n; i++) {
        cin >> towers[i];
    }

    stack<pair<int, int>> s; //stack(fisrt:인덱스)(second:높이) 이런식으로 2칸의 스택을 만들음
    for (int i = 0; i < n; i++) {
        while (!s.empty() && s.top().second < towers[i]) {
            s.pop();
        }
        
        if (s.empty()) {
            cout << 0 << ' ';
        } else { //second에는 높이가 들어있기때문에 새로운 높이가 stack의 top에있는 값보다 낮을 경우 스택의 fisrt(index)값을 반환한다. 그리고 정보를 저장한다.
            cout << s.top().first << ' ';
        }

        s.push({i + 1, towers[i]}); //한번할때마다 정보저장
    }

    return 0;
}
