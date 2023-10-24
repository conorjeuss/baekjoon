#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    set<string> unheard;
    vector<string> res;


    for(int i = 0; i < N; i++) {
        string name;
        cin >> name;
        unheard.insert(name);
    }

    for(int i = 0; i < M; i++) {
        string name;
        cin >> name;
        if(unheard.find(name) != unheard.end()) { //듣도못한 사람 set자료구조에 포함됨. 만약 이름을 찾아내면 unheard.end()값이 안나옴
            res.push_back(name);
        }
    }

    // 사전순으로 정렬
    sort(res.begin(), res.end());

    cout << res.size() << "\n";
    for(int i=0; i<res.size(); i++)
    {
        cout << res[i] << "\n";
    }

    return 0;
}
