#include<iostream>
using namespace std;

int main(void)
{
    int a, b, c;
    cin >> a >> b >> c;

    int cook_time;
    cin >> cook_time;

    int h = cook_time / 3600;
    int m = (cook_time % 3600) / 60;
    int s = (cook_time % 3600) % 60;

    int res_h = a + h;
    int res_m = b + m;
    int res_s = c + s;

    if(res_s >= 60) {
        res_s -= 60;
        res_m += 1;
    }
    
    if(res_m >= 60) {
        res_m -= 60;
        res_h += 1;
    }

    res_h = (res_h) % 24; //D의 범위가 크기때문에 -24로는 커버가안됨

    cout << res_h << ' ' << res_m << ' ' << res_s;
    return 0;
}
