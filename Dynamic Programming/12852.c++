//처음 내가 쓴 코드 ( 틀림 )
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    vector<int> dp_num(N+1,0);
    dp_num[1] = 0;

    for(int i=2; i<=N; i++)
    {
        dp_num[i] = dp_num[i-1] + 1;

        if(i % 3 == 0) {
            dp_num[i] = min(dp_num[i],dp_num[i/3] + 1);
        }
        else if(i % 2 == 0) { //여기서 if가 참이면 else if는 검사하지 않게됨--> 정확한 정답 도출 x --> if if문을 사용해야함 
            dp_num[i] = min(dp_num[i],dp_num[i/2] + 1);
        }
    }

    int num = dp_num[N];

    while(true) { //출력 알고리즘 이 복잡함 + 부정확
        for(int i = N; i>=1; i--) {
            if(dp_num[i] == num) {
                cout << i << ' ';
                N = i;
                num --;
                break;
            }
        }

        if(num < 0)
        {
            break;
        }
    }

    return 0;
}

//----------------------------------------------정확한 해결------------------------------------------------// 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    vector<int> dp_num(N+1,0);
    vector<int> prev_num(N+1,0); //prev_num 를 저장하기 위한 vector

    dp_num[1] = 0;

    for(int i=2; i<=N; i++)
    {
        dp_num[i] = dp_num[i-1] + 1;
        prev_num[i] = i - 1;

        if(i % 3 == 0 && dp_num[i] > dp_num[i/3] + 1) { //조건을 다르게 씀 min함수 사용 x 
            dp_num[i] = dp_num[i/3] + 1;
            prev_num[i] = i / 3;
            
        }
        if(i % 2 == 0 && dp_num[i] > dp_num[i/2] + 1) {
            dp_num[i] = dp_num[i/2] + 1;
            prev_num[i] = i / 2; // 조건이 맞다면 이전 값을 저장.
        }
    }

    cout << dp_num[N] << '\n'; // < -- endl로 써도 상관없음

    while(N > 0) { //간단한 출력 방법.
        cout << N << ' ';
        N = prev_num[N];
    }

    return 0;
}
