#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void backtrack(int num,int s,vector<int> &arr_new,vector<int> arr_og)
{
    if(arr_new.size() == s)
    {
        for(int num : arr_new) {
            cout << num << " ";
        }
        cout << "\n";
        return;
    }
    
    int comp = 0;
    if(!arr_new.empty())
    {
        comp = arr_new.back();
    }

    for(int i=0; i<num; i++)
    {
        if(find(arr_new.begin(),arr_new.end(),arr_og[i]) == arr_new.end() && arr_og[i] > comp )
        {
            arr_new.push_back(arr_og[i]);
            backtrack(num,s,arr_new,arr_og);
            arr_new.pop_back();  
        }
    }
}

int main(void)
{
    int num,s;
    cin >> num >> s;

    vector<int> arr_og(num,0);
    vector<int> arr_new;

    for(int i=0; i<num; i++)
    {
        cin >> arr_og[i];
    }

    sort(arr_og.begin(),arr_og.end()); //오름차순정렬

    int start = 0;

    backtrack(num,s,arr_new,arr_og);

    return 0;
}

