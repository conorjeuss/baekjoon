#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

bool compare(const string &a, const string &b) {
    if (a.length() == b.length()) {
        return a < b; //길이가 같다면 사전순으로 정렬 ==> true가 반환되면  a - b로 놓고 false 가 반환되면 b - a순으로 정렬시킴
    }
    return a.length() < b.length(); // 길이가 다르다면 길이가 짧은거를 앞에 놓음으로 정렬함
}

int main() {
    int N;
    cin >> N;
    
    set<string> unique_words;
    vector<string> words;

    for (int i = 0; i < N; ++i) {
        string word;
        cin >> word;
        if (unique_words.find(word) == unique_words.end()) {  // 중복 체크 set은 중복된 것을 허락하지않기 때문에 words 저장공간에도 중복하지않고 넣을 수 있음.
            unique_words.insert(word);
            words.push_back(word);
        }
    }
    
    sort(words.begin(), words.end(), compare); // sort함수는 사용자 정의된 compare함수의 기준에 맞춰 원소들을 정렬시킴

    for (const auto& word : words) {
        cout << word << endl;
    }
    
    return 0;
}
