#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>
#include<set>
#include<queue>
#include<unordered_map>
#include<cctype> //lower,upper
using namespace std;

int main(void)
{
    vector<int> arr3(3,0);
    for(int i=0; i<3; i++)
    {
        cin >> arr3[i];
    }

    sort(arr3.begin(),arr3.end());

    int dif1,dif2;
    for(int i=0; i<3; i++)
    {
        dif1 = arr3[1] - arr3[0];
        dif2 = arr3[2] - arr3[1];
    }

    int min_dif = min(dif1,dif2);

    int res;
    bool check = false;
    for(int i=0; i<2; i++)
    {
        if(arr3[i+1] - arr3[i] == min_dif)
        {
            continue;
        }
        else {
            check = true;
            res = arr3[i] + min_dif; 
        }
    }

    if(check == false)
    {
        res = arr3[2] + min_dif;
        cout << res;
    }
    else {
        cout << res;
    }

    return 0;
}
