#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main(void)
{
    int N,m,M,T,R;
    cin >> N >> m >> M >> T >> R;

    //N의 값까지 완성되면 종료
    //m부터 시작. 최소 m 최대 M.
    int curr_time = 0; //현재까지 운동한 시간 
    int res_time = 0;
    int curr_h = m;
    bool check = false;

    if(m + T > M) {
        check = true;
    }

    else {
       while(curr_time != N)
        {
            if(curr_h + T <= M)
            {
                curr_h += T;
                curr_time++;
                res_time++;
            }
            else {
                curr_h -= R;
                res_time++;
                if(curr_h < m) {
                    curr_h = m;
                }
            }
        }
    }

    if(check == false) {
        cout << res_time;
    }
    else {
        cout << "-1";
    }
    

    return 0;
}
