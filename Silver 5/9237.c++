#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
    int n;
    cin >> n;

    vector<int> tree(n);
    vector<int> tree_max;

    for(int i=0; i<n; i++)
    {
        cin >> tree[i];
    }

    sort(tree.begin(),tree.end(),greater<int>());

    int max = 0;
    for(int i=0; i<n; i++)
    {
        int val;
        val = (tree[i] - (n - i - 1));
        tree_max.push_back(val);

        if(tree_max[i] > max)
        {
            max = tree_max[i];
        }
    }

    cout << (max+n+1);

    return 0;
}
