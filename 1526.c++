#include <iostream>
using namespace std;

bool num_check(int n) {
    while(n > 0) {
        int k = n % 10;
        if(k != 4 && k != 7) { //if문 안이 true면 금민수가 아니게 됨 ==> if(k != 4 || k != 7) 이렇게 되면 k == 4일때 또는 조건 때문에 if(true)가 됨 ==> 금민수인데 금민수가 아니게 됨 하지만 && 는 false && true 이기 때문에 if(false)가 됨 
            return false;
        }
        n = n / 10;
    }
    return true;
}

int main() {
    int N;
    cin >> N;

    for(int i = N; i >= 4; i--) {
        if(num_check(i)) {
            cout << i << endl;
            return 0;
        }
    }
    
    return 0;
}

//endl ==> \n 과 출력버퍼를 비워줌
