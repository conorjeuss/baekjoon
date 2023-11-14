#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
    int test_case;
    cin >> test_case;

    while(test_case--)
    {
        double price;
        cin >> price;

        double res_p; //float말고 double을 사용해야함 정밀도가 높음 --> double사용
        res_p = price * (0.8) ;

        printf("$%.2lf\n",res_p);

    }

    return 0;
}
