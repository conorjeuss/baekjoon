#include<iostream>
#include<vector>
using namespace std;

int n;
vector<int> tree[100001];
int p_node[100001];

void dfs(int cur)
{
    for(int k : tree[cur])
    {
        if(k == p_node[cur]) { //value값이 cur의 부모노드면 건너뛰기
            continue;
        }
        p_node[k] = cur;
        dfs(k);
    }
}


int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for(int i=0; i<n-1; i++)
    {
        int a,b;

        cin >> a >> b;

        tree[a].push_back(b); //tree에다가 값 저장.
        tree[b].push_back(a);

    }

    dfs(1);

    for(int j=2; j<=n; j++)
    {
        cout << p_node[j] << "\n";
    }

    return 0;
}
