#include<iostream>
#include<algorithm>  // Fixed the typo here
using namespace std;

int main(void)
{
    int sum1 =0;
    int sum2 =0;

    for(int i=0; i<2; i++)
    {
        int a,b,c,d;

        cin >> a >> b >> c >> d;  // Removed the endl from here

        if(i==0) {  // Changed = to ==
            sum1 = a + b + c + d; 
        }
        else {
            sum2 = a+b+c+d;
        }
    }

    int res = max(sum1,sum2);

    cout << res;

    return 0;
}
