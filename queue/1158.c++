#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(void)
{
    int N,K;
    cin >> N >> K;

    queue<int> q;

    for(int i=1; i<=N; i++)
    {
        q.push(i);
    }

    vector<int> result(N,0);
    int a = 0;

    while(!q.empty())
    {
        for(int j=0; j<K-1; j++)
        {
            q.push(q.front());
            q.pop();
        }
        result[a] = q.front();
        q.pop();
        a++;
    }

    cout << "<";
    for(int i = 0; i < N; i++)
    {
        cout << result[i];
        if(i != N-1) 
        {
            cout << ", ";
        }
    }
    cout << ">";

    return 0;
}
