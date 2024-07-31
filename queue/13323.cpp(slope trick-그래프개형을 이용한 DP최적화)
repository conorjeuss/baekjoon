#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

int main(void)
{
    int n;
    int num;
    long long res = 0;
    priority_queue<int> pq;

    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> num;
        num = num - i; //그래프의 x좌표 평행이동하기 때문에 한번 값이 들어갈떄마다 +1이됨.
        //따라서(top + t(평행이동횟수 == ai 연산횟수)) - ai값(num)만큼 최솟값(res) 값이 커짐.
        //그렇기때문에 ai값이아니라 ai - i값을 해줌으로써 top에다가 t를 더할필요가 없어짐.
        if(!pq.empty() && pq.top() > num)  {//ai가 더작으면 각 부분마다 기울기가 변하고 res(최솟값)값이 바뀜 ==> (top - ai만큼 올라감)) 
            pq.push(num); //ai기준 왼쪽기울기 -1
            res += pq.top() - num; //최솟값(답)이 오름.
            pq.pop(); //top을 없애줌으로써 r왼쪽갑이 모두 +1 (값을 push하면 값기준 왼쪽 기울기 -1,값을 pop하면 값기준 왼쪽기울기 +1)
            pq.push(num); //그러나 ai < < top를 +1하기위해 위에서 pop해줌으로써 ai의 왼쪽 기울기가 또 -1됨. --> push(num=ai)하여 ai기준 왼쪽기울기를 -1시킴.
        }
        else { //ai값이 top보다 크다면 최솟값이 바뀌지않음(y축) 최솟값이되는 k값(x값만 바뀌게됨)
            pq.push(num); //num(ai)기준 왼쪽기우리 -1 but res(최솟값)은 바뀌지 않음.
        }
    }

    cout << res << endl;

    return 0;
}
