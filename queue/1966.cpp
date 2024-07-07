#include<iostream>
#include<queue>
#include<algorithm>
#include<set>
using namespace std;

int main(void)
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        int n,m; //m은 인덱스값
        cin >> n >> m;

        set<int> s; //남은값들중 가장 큰 값을 구하기        
        queue<pair<int,int>> q;

        for(int i=0; i<n; i++) {
            int k;
            cin >> k;
            q.push(make_pair(k,i)); //queue에 pair로 값을 넣을때는 make_pair함수사용
            s.insert(k); 
        }

        int cur_max_val = *s.rbegin(); //set s에서 가장 큰 값 찾는 함수
        int cnt = 0;

        while(!q.empty())
        {
            if(q.front().first != cur_max_val)
            {
                q.push(q.front());
                q.pop();
            }
            else if(q.front().first == cur_max_val) {
                cnt++;
                if(q.front().second == m) {
                    cout << cnt << endl;
                    break;
                }
                q.pop();
                //max_val갱신해주기
                s.erase(cur_max_val);
                if(!s.empty()) {
                    cur_max_val = *s.rbegin(); // 최대값 갱신
                }

            }
        }
    }

    return 0;
}
//정답은 나오지만 시간초과
