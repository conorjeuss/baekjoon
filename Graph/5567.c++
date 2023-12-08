#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n,m;
int invite_cnt = 0;

vector<int> f_list[501];
vector<bool> real_frineds(501,0);
bool visited[501];

void f(int node) 
{
    for(int k : f_list[node])
    {
        if(k != 1 && !real_frineds[k] && !visited[k])
        {
            visited[k] = true;
            invite_cnt++;
        }
    }

}

int main(void)
{
    cin >> n >> m;

    while(m--)
    {
        int a,b;
        cin >> a >> b;

        f_list[a].push_back(b);
        f_list[b].push_back(a);

    }

    for(int num : f_list[1])
    {
        real_frineds[num] = true;
        invite_cnt++;
    }

    for(int i=2; i<=n; i++)
    {
        if(real_frineds[i]) {
            f(i);
        }
    }

    cout << invite_cnt;
    return 0;
}
