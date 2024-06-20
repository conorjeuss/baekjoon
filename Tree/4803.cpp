#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

const int MX = 503;
int u,v,n,m;
bool tree_check = true;
int tree;
int test_case = 0;

//table만들기
vector<int> adj[MX];
bool vis[MX];

bool dfs(int cur,int prev)
{
    
    for(int nxt : adj[cur])
    {
        if(nxt == prev) continue; //부모노드가 nxt일경우 건너뛰기

        if(vis[nxt] == true) { //자식노드가 이미 이전에 방문되었다면 트리가 될 수 없음.
            tree_check = false;
            continue;
        }

        vis[nxt] = true;
        dfs(nxt,cur);
    }

    return tree_check;
}


int main(void)
{
    while(1)
    {
        cin >> n >> m;
        if(n == 0 && m == 0) {
            return 0;
        }

        tree = 0;

        for (int i = 1; i <= n; i++) { //test_case마다 adj초기화시켜줘야함.
            adj[i].clear();
        }
        fill(vis, vis + n + 1, false); //vis도 초기화 시키기

        while(m--)
        {
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        for(int i=1; i<=n; i++)
        {
            if(vis[i] == true) {
                continue;
            }
            vis[i] = true;
            tree_check = true;

            if(dfs(i,-1)) {
                tree += 1;
            }
        }

        test_case++;
        cout << "Case " << test_case << ": ";
        if (!tree)
        cout << "No trees." << '\n';
        else if (tree == 1)
        cout << "There is one tree." << '\n';
        else
        cout << "A forest of " << tree << " trees." << '\n';
    }

    return 0;
}
