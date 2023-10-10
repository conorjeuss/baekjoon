#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(void)
{
    int num;
    cin >> num;

    int price;
    cin >> price;

    int res;    
    if(num >= 5 && num < 10)
    {
        res = price - 500;

        if(res <= 0) {
            res = 0;
            cout << res;
        }
        else {
            cout << res;
        }
    }
    else if(num >= 10 && num < 15) {
        res = min(price-500,(int)(price * 0.9));

        if(res <= 0) {
            res = 0;
            cout << res;
        }
        else {
            cout << res;
        }
    }
    else if(num >= 15 && num < 20) {
        int arr[3];
        arr[0] = price - 500;
        arr[1] = (int)(price * 0.9);
        arr[2] = price - 2000;

        int min_num = arr[0];
        for(int i=0; i<3; i++)
        {
            if(arr[i] < min_num) {
                min_num = arr[i];
            }
        }
        res = min_num;

        if(res <= 0) {
            res = 0;
            cout << res;
        }
        else {
            cout << res;
        }
    }
    else if(num >= 20) {
        int arr[4];
        arr[0] = price - 500;
        arr[1] = (int)(price * 0.9);
        arr[2] = price - 2000;
        arr[3] = (int)(price * 0.75);

        int min_num = arr[0];
        for(int i=0; i<4; i++)
        {
            if(arr[i] < min_num) {
                min_num = arr[i];
            }
        }

        res = min_num;

        if(res <= 0) {
            res = 0;
            cout << res;
        }
        else {
            cout << res;
        }
    }

    else {
        res = price;

        if(res <= 0) {
            res = 0;
            cout << res;
        }
        else {
            cout << res;
        }
        
    }

    return 0;
}

-----------------------------------------------------간단한 정답---------------------------------------------------
  #include<iostream>
#include<algorithm>
using namespace std;

int main(void)
{
    int num;
    cin >> num;

    int price;
    cin >> price;

    int res = price;  // 기본 가격으로 초기화

    if (num >= 5) {
        res = min(res, price - 500);
    }
    if (num >= 10) {
        res = min(res, static_cast<int>(price * 0.9));
    }
    if (num >= 15) {
        res = min(res, price - 2000);
    }
    if (num >= 20) {
        res = min(res, static_cast<int>(price * 0.75));
    }

    cout << max(0, res) << endl;  // 할인 후 금액이 0보다 작으면 0으로 출력

    return 0;
}
