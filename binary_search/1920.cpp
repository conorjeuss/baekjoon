#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n,m;

bool compare(const int& a, const int& b)
{
    return a < b;
}

int check_fun(int target, vector<int> &arr_n)
{
    int min_index = 0;
    int max_index = n-1;

    while(min_index <= max_index)
    {
        int mid_index = (min_index + max_index) / 2;

        if(arr_n[mid_index] < target)
        {
            min_index = mid_index + 1;
        }
        else if(arr_n[mid_index] > target) {
            max_index = mid_index - 1;
        }
        else {
            return 1;
        }
    }

    return 0; //그냥나오게 된 경우(찾지못함.)
}


int main(void)
{
    ios_base::sync_with_stdio(false); // 입출력 속도 향상
    cin.tie(NULL);
    
    cin >> n;
    vector<int> arr_n(n);

    for(int i=0; i<n; i++)
    {
        cin >> arr_n[i];
    }

    sort(arr_n.begin(),arr_n.end(),compare);

    cin >> m;
    vector<int> arr_m(m);

    for(int j=0; j<m; j++)
    {
        cin >> arr_m[j];
        cout << check_fun(arr_m[j], arr_n) << "\n";
    }



    return 0;
}
