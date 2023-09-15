#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0); //입출력을 빠르게 하기위한 코드
    cin.tie(0);
    //또다른 코드
    /* 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    */

    int N;
    cin >> N;

    //queue생성
    queue<int> qe;

    string cmd;

    for(int i=0; i<N; i++)
    {
        cin >> cmd;
        if(cmd == "push") {
            int x;
            cin >> x;
            qe.push(x);
        }
        else if(cmd == "pop") {
            if(qe.empty()) {
                cout << "-1\n";
            }
            else {
                cout << qe.front() << "\n"; //\n과 endl (출력버퍼비워주는 작업까지함) 은 약간의 시간차이가있다 --> 시간초과가 뜨지 않기위해서는 \n을 사용
                qe.pop();
            }
        }
        else if(cmd == "size") {
            cout << qe.size() << "\n";
        }
        else if(cmd == "empty") {
            cout << (qe.empty() ? 1 : 0) << "\n"; //삼항연산자와 if else를 사용하는 로직에는 시간차이가 나지 않는다. 아무렇게나 써도 상관없음
        }
        else if(cmd == "front") {
            if(qe.empty()) {
                cout << "-1\n";
            }
            else {
                cout << qe.front() << "\n";            
            }
        }
        else if(cmd == "back") {
            if(qe.empty()) {
                cout << "-1\n";
            }
            else {
                cout << qe.back() << "\n";            
            }
        }
    }
    return 0;
}

-------------------------------------------------------------------------------------------------------------------------------------------------------
//기억해야할점 :
/*
        } else if (cmd == "front") {
            cout << (q.empty() ? "-1\n" : q.front() + "\n");
        } else if (cmd == "back") {
            cout << (q.empty() ? "-1\n" : q.back() + "\n");

            이코드에서 q.front() 와 \n은 같이 사용 불가 ex) q.front() + "\n";  --> 이런식으로 int형타입인 front함수와 문자열타입인 \n을 합칠 수 없음 
            ==> to_string(q.front()) + "\n"와 같이 int형 타입을 to_string함수를 통해 문자열로 바꾼후 출력하면 됨
-------------------------------------------------------------------------------------------------------------------------------------------------------
        } else if (cmd == "front") {
            cout << (q.empty() ? "-1\n" : to_string(q.front()) + "\n");
        } else if (cmd == "back") {
            cout << (q.empty() ? "-1\n" : to_string(q.back()) + "\n");
*/
