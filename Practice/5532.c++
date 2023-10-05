#include<iostream>
#include<algorithm> //min,max
using namespace std;

int main(void)
{
    int L;
    cin >> L;

    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int res_lang = (a / c);
    if(a % c != 0) {
        res_lang += 1;
    }
    int res_math = (b / d);
    if(b % d != 0) {
        res_math += 1;
    }

    int result = L - max(res_lang,res_math);

    cout << result;
    return 0;
}
