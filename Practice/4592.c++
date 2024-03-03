#include<iostream>
#include<string>
#include<vector> //push_back
#include<string>
#include<cctype> //to lower, to upper
#include<algorithm> //trasform
#include<sstream>
#include<unordered_set>
#include<math.h>
using namespace std;

int main(void)
{
    while(1)
    {
        int t_case;
        cin >> t_case;

        if(t_case == 0) {
            break;
        }

        vector<int> arr(t_case);
        vector<int> res_arr;

        for(int i=0; i<t_case; i++) {
            cin >> arr[i];
            
            if(i==0) {
                res_arr.push_back(arr[i]);
            }
            else {
                if(arr[i] != arr[i-1]) {
                    res_arr.push_back(arr[i]);
                }
                else {
                    continue;
                }
            }
        }

        int len = res_arr.size();
        
        //출력
        for(int j=0; j<len; j++) {
            cout << res_arr[j] << " ";
        }
        cout << "$\n";

    }
    return 0;
}
