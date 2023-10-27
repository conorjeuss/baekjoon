#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    int arr_cnt[26] = {0,};
    vector<int> arr(N,0);
    for(int i=0; i<N; i++)
    {
        string name;
        cin >> name;

        arr_cnt[name[0] - 'a']++;
    }

    bool check = false;
    for(int i=0; i<26; i++)
    {
        if(arr_cnt[i] >= 5) {
            check = true;
            cout << (char)(i + 'a');
        }
        else {
            continue;
        }

    }

    if(check == false)
    {
        cout << "PREDAJA\n";
    }
    return 0;
}
