#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    vector<int> alphabet(26, 0);
    string line;

    while(getline(cin, line)) { //getline((cin,line)) line에다가 개행문자가 오기전까지 문자열을 받음. 그러나 사용자가 문자열을 넣지않고 개행문자만 와도 true값을 인식하기 때문에 while문 종료안됨 따라서 항상true값을 가지기때문에 crtl+z키(운영체재:window일때/리눅스나 mac os 에서는 crtl + d키임)를 통해 수동적으로 끝내야함.
        for(char ch : line) { //char 변수 ch를 만들어 line에 받은 문자열을 문자하나씩 ch에 넣음
            if(ch >= 'a' && ch <= 'z') {
                alphabet[ch - 'a']++;
            }
        }
    }

    // 가장 빈도수가 높은 알파벳 찾기
    int maxFreq = *max_element(alphabet.begin(), alphabet.end()); //algorithm헤더파일에 포함된 max_elemnet ==> 벡터에서 가장많이 사용된 값을 반환

    for(int i = 0; i < 26; i++) {
        if(alphabet[i] == maxFreq) {
            cout << (char)(i + 'a');
        }
    }

    return 0;
}
