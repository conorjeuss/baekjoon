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

int fun(int num)
{
    int ans;
    int new_num = 0;
    int n_n_size = size(to_string(num));
    while(num > 0)
    {
        int t;
        t = num % 10;
        new_num += t;
        
        num = num/10;
    }

    n_n_size = size(to_string(new_num));
    ans = new_num;

    if(n_n_size == 1) {
        return ans;
    }
    else {
        return fun(ans);
    }

    
}


int main(void)
{
    while(1)
    {
        int num;
        cin >> num;

        if(!num) break;

        cout << fun(num) << endl;

    }

    return 0;
}
