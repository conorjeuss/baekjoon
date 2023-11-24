#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> bookSales; //map의 사용 빠르게 검색하기 위해 사용되는 저장 컨테이너. 만약 집어넣는 값이 없으면 자동으로 생성
                                //map은 애초에 저장공간의 크기를 미리 생각해놓지 않는다 새로생성되면 (ㅁ,0)이런식으로 map에 저장공간이 생성된다.
    string bookTitle;
    for(int i = 0; i < n; i++) {
        cin >> bookTitle;
        bookSales[bookTitle]++;
    }

    int maxSales = 0;
    string bestseller;
    for(const auto& book : bookSales) { //const auto& 는 자동타입추론으로 auto코드로 컴파일러에게 변수형을 추론시키도록 한다.
        if(book.second > maxSales) {
            maxSales = book.second;
            bestseller = book.first;
        } else if(book.second == maxSales && book.first < bestseller) { //사전순으로 앞서면 베스트셀러로 등극
            bestseller = book.first;
        }
    }

    cout << bestseller << endl;

    return 0;
}
