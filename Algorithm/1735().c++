//문제를 풀기위한 알고리즘 활용 --> 비효율적 알고리즘 + 수정해야할 부분 많음.
#include<iostream>
#include<algorithm>

using namespace std;

void change(int *n,int *res_son,int *res_mom)
{
    bool is_prime[n+1];
    for (int i = 2; i <= n; i++) {
        is_prime[i] = true;
    }

    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }

    for(int i=2; i<=n; i++)
    {
        if(is_prime[i]) {
            if(res_son % i == 0 && res_mom % i == 0) {
                res_son = res_son / i;
                res_mom = res_mom / i;
                n = min(res_mom,res_son);
                
                return change(n,res_son,res_mom);
            }
            else if(i==n)
            {
                if(res_son % i == 0 && res_mom % i == 0) {
                    res_son = res_son / i;
                    res_mom = res_mom / i;

                    n = min(res_mom,res_son);
                
                    return change(n,&res_son,&res_mom);
                }
                else {
                    return;
                }
            }
        }
    }


}

int main(void)
{
    int a,b;
    int c,d;

    cin >> a >> b >> c >> d;

    int res_son = (a*d) + (b*c);
    int res_mom = b*d;

    int n = min(res_mom,res_son);
    
    change(n,res_son,res_mom); //change함수로 보내서 매개변수의 ogrinal값을 바꿔준다.

    cout << res_son << ' ' <<res_mom;


    return 0;
}
