#include <iostream>
#include <queue> //queue 라이브러리사용
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    queue<int> q;
    
    for (int i = 0; i < N; ++i) {
        string command;
        cin >> command;
        
        if (command == "push") {
            int x;
            cin >> x;
            q.push(x);
        } else if (command == "pop") {
            if (q.empty()) {
                cout << -1 << endl;
            } else {
                cout << q.front() << endl;
                q.pop();
            }
        } else if (command == "size") {
            cout << q.size() << endl;
        } else if (command == "empty") {
            cout << (q.empty() ? 1 : 0) << endl;
        } else if (command == "front") {
            if (q.empty()) {
                cout << -1 << endl;
            } else {
                cout << q.front() << endl;
            }
        } else if (command == "back") {
            if (q.empty()) {
                cout << -1 << endl;
            } else {
                cout << q.back() << endl;
            }
        }
    }
    
    return 0;
}

--------------------------------------------------------------------------------------------------
/*queue(큐)문제관련
FIFO:(선입선출) 원칙을 따른다.
자료구조중 하나
*/
    
