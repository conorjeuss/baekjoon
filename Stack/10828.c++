#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(void)
{
    int N;
    cin >> N;

    string command;
    //스택생성
    stack<int> s;

    for(int i=0; i<N; i++)
    {
        cin >> command;

        if(command == "push") {
            int x;
            cin >> x;
            s.push(x);
        }
        else if(command == "pop") {
            if(s.empty()) {
                cout << "-1\n";
            }
            else {
                cout << s.top() <<"\n";
                s.pop();
            }

        }
        else if(command == "size") {
            cout << s.size() << "\n";
        }
        else if(command == "empty") {
            if(s.empty()) {
                cout << "1\n";
            }
            else {
                cout << "0\n";
            }
        }
        else if(command == "top") {
            if(s.empty()) {
                cout << "-1\n";
            }
            else {
                cout << s.top() <<"\n";
            }
        }

    }

    return 0;
}

----------------------------------------------------------------------
/*
stack(스택)
:
LIFO(last in first out) --> 후입선출 구조 한쪽이 막혀있다고 생각하면 편함

: push,pop등을 활용가능
: 함수호출, 문장이나 식의 괄호를 검사하는데도 사용
: DFS(깊이우선탐색)에도 활용됨.
*/
