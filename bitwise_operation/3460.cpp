#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>
#include<set>
#include<queue>
#include<unordered_map>
#include<cctype> //lower,upper,isdigit
#include<map>
#include<cmath>

using namespace std;

void find_one(int n)
{
    int index_val = 0;

    while(n>0) {
        //lsb비트 연산을 통해 index값 출력
        if((n&1) == 1) { // if(n&1)로해도 무방 -> 1을 반환하면 true값이기때문이다. 
            cout << index_val << " ";
        }

        index_val++;
        n >>= 1; //비트 오른쪽으로 한번이동 --> lsb가 한칸씩바뀜 
    }

    cout << "\n";
}

int main(void)
{
    int test;
    cin >> test;

    while(test--) //0이 되기전까지 즉 true일때까지 while문을 돌림
    {
        int N;
        cin >> N;

        find_one(N);
    }


    return 0;
}

//비트연산
  n >>= k -> 오른쪽으로 k비트만큼 비트이동 --> ex) 1101 -> 110 -> 11 -> 1 이런식으로바뀜 (k는1일때)
  n <<= k -> 왼쪽으로 이동
  2^k로 나눈 효과와 같음.

//N&1 연산
  AND연산으로 1과 N을 AND연산함.
  비트가 둘다 1이면 1을 반환 나머지는 0을반환.
// |(OR연산) , ^(XOR연산)
    OR연산은 둘을 비교했을때 하나라도 1이면 1반환
    XOR연산은 둘이 다를떄 1을반환.
