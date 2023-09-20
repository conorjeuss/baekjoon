#include <iostream>
#include <string>
using namespace std;

int main() {
    string doc, word;
    getline(cin, doc); 
    getline(cin, word); 

    int count = 0;
    size_t pos = 0; 

    while (true) {
        pos = doc.find(word, pos); // pos 위치 이후로 word가 등장하는 첫 번째 위치를 찾는다.
        if (pos == string::npos) break; // 더 이상 찾을 수 없으면 종료 
        count++; // 단어를 찾았으므로 카운트 증가
        pos += word.length(); 
    }

    cout << count << endl; // 단어가 등장하는 횟수를 출력한다.

    return 0;
}

-----------------------------------------------------------
/*
.find함수 ==> string 헤더파일에 존재
문자열이 발견되면 그 문자열이 시작되는 인덱스값을 반환한다. 
사용법 :
s.find(찾을 단어,시작위치);

//중요한점
pos이후에 word를 찾지 못할 시 string::npos라는 특별한 반환값을 반환함.
*/
