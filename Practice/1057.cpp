#include <iostream>
#include <vector>
#include <chrono>
#include <math.h>
using namespace std;
using namespace chrono;

int main() {
    int N,a,b;

    cin >> N >> a >> b;
    int cnt = 0;

    while(true)
    {
        cnt++;

        //종료
        if(abs(a-b)==1) {
            if(a > b) {
                if(a % 2 == 0) {
                    break;
                }
            }
            else if(a < b) {
                if(b % 2 == 0) {
                    break;
                }
            }
        }

        if(a%2 != 0) {
            a = (a+1) / 2;
        }
        else {
            a /= 2;
        }

        if(b%2 != 0) {
            b = (b+1) / 2;
        }
        else {
            b /= 2;
        }

    }

    cout << cnt;

    return 0;
}
