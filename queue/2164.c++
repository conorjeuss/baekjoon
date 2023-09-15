#include<iostream>
#include<queue>

using namespace std;

int main(void)
{
    int N;
    cin >> N;

    queue<int> q;

    for(int i=1; i<=N; i++)
    {
        q.push(i);
    }

    while(q.size() != 1)
    {
        q.pop();
        
        q.push(q.front());
        q.pop();

        cnt--;
    }

    cout << q.front() << "\n";
    return 0;
}
