#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<int> num(n,0);
    vector<int> result(n,-1);  // 결과를 저장할 벡터, 초기값은 -1로 설정

    for(int i=0; i<n; i++)
    {
        cin >> num[i];
    }

    for(int i=0; i<n; i++)
    {
        stack<int> st;

        for(int a=i; a<n; a++)  // a는 i부터 시작하며 n까지 증가
        {
            st.push(a);
            if(num[st.top()] > num[i])
            {
                result[i] = num[st.top()];
                break;
            }
            else{
                st.pop();  // 이전의 값이 현재 값보다 작거나 같으면 스택에서 제거
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        cout << result[i] << ' ';  // 출력 부분 수정: '>>' 대신 '<<' 사용
    }
    cout << '\n';
    return 0;
}
------------------------------------------------------------------------
  //시간초과
  
